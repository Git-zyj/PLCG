#!/usr/bin/env python3
"""PLCG PLuTo driver: run pluto and re-assemble the kernel skeleton in-process.

This is a drop-in replacement for ``scripts/wrappers/polycc_parallel`` (same
command line: ``<kernel.c> [pluto options] -o <output.c>``) but it removes the
shell layer from the hot path: instead of bash -> pluto -> bash(inscop) with
~20 helper forks (grep/sed/awk/cat/echo/gcc) per kernel, it runs

    pluto  (1 process)  +  gcc -E (1 process, macro expansion of the body)

and performs the skeleton re-assembly in Python.  Output is byte-identical to
the shell wrapper (verified against the recorded corpus; see
``scripts/compare_drivers.py``).

The module can also be imported::

    from pluto_driver import PlutoDriver
    driver = PlutoDriver(pluto_dir)
    ok, message = driver.run(kernel_c, out_c, stdout_path, options)
"""

from __future__ import annotations

import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

__all__ = ["PlutoDriver", "assemble_kernel", "PlutoDriverError"]

# the shell wrapper matches "#pragma<space>+scop" / "#pragma<space>+endscop"
_SCOP_RE = re.compile(r"#pragma[ \t]+scop")
_END_RE = re.compile(r"#pragma[ \t]+endscop")
_LINE_MARKER_RE = re.compile(r"^# ")

# lines the shell wrapper appends when the kernel does not define them
_MATH_INCLUDE = "#include <math.h>"
_OMP_INCLUDE = "#include <omp.h>"
_CEILD_DEFINE = "#define ceild(n,d)  ceil(((double)(n))/((double)(d)))"
_FLOORD_DEFINE = "#define floord(n,d) floor(((double)(n))/((double)(d)))"
_MAX_DEFINE = "#define max(x,y) ((x) > (y)? (x) : (y))"
_MIN_DEFINE = "#define min(x,y) ((x) < (y)? (x) : (y))"


class PlutoDriverError(RuntimeError):
    """Raised when pluto fails or produces no usable output."""


def _split_head_tail(src_text: str):
    """Split the original kernel into (head, tail) around its first scop."""
    lines = src_text.splitlines()
    start = next((i for i, line in enumerate(lines)
                  if "#pragma" in line and _SCOP_RE.search(line)), None)
    if start is None:
        return lines, []
    head = [line for line in lines[:start]
            if not ("#pragma" in line and _SCOP_RE.search(line))]
    end = next((i for i, line in enumerate(lines)
                if "#pragma" in line and _END_RE.search(line)), None)
    tail = lines[end + 1:] if end is not None else []
    return head, tail


def _substitute_markers(lines: list[str]) -> list[str]:
    """Apply the wrapper's `sed` substitutions to already-final body lines."""
    out: list[str] = []
    for line in lines:
        line = line.replace("__bee_schedule", "#pragma schedule")
        if "_NL_DELIMIT_" in line:
            line = line.replace("_NL_DELIMIT_", "\n", 1)
        out.extend(line.split("\n"))
    return out


def _strip_trailing_blank(lines: list[str]) -> list[str]:
    """``$(...)`` in the shell drops trailing newlines: mimic that per section."""
    while lines and lines[-1] == "":
        lines.pop()
    return lines


def _preprocess_body(body_lines: list[str], cc: str = "gcc") -> list[str]:
    """`gcc -E -P -CC -nostdinc` over the generated body, as the wrapper does."""
    with tempfile.NamedTemporaryFile("w", suffix=".body.c", delete=False) as handle:
        handle.write("\n".join(body_lines) + "\n")
        body_file = handle.name
    try:
        proc = subprocess.run(
            [cc, "-E", "-P", "-CC", "-nostdinc", body_file],
            capture_output=True,
            text=True,
        )
        if proc.returncode != 0:
            raise PlutoDriverError(f"preprocessor failed: {proc.stderr.strip()}")
        kept = [line for line in proc.stdout.splitlines()
                if not _LINE_MARKER_RE.match(line)]
        return _substitute_markers(kept)
    finally:
        try:
            os.unlink(body_file)
        except OSError:
            pass


def assemble_kernel(src_text: str, pluto_text: str, cc: str = "gcc") -> str:
    """Rebuild the full kernel around pluto's optimised body (inscop equivalent).

    Mirrors ``scripts/wrappers/inscop_parallel.in`` line for line, including the
    include de-duplication, the ceild/floord/max/min fall-backs and the final
    ``echo`` of every section (each section is terminated by a newline).
    """
    head, tail = _split_head_tail(src_text)

    includes: list[str] = []
    init: list[str] = []
    for line in head:
        (includes if line.startswith("#include") else init).append(line)

    # one pass over pluto's output: split into includes (de-duplicated, like
    # `awk '!x[$0]++'`) and the body that inscop preprocesses
    body_lines: list[str] = []
    for line in pluto_text.splitlines():
        if line.startswith("#include"):
            if line not in includes:
                includes.append(line)
        else:
            body_lines.append(line)

    if not any(_MATH_INCLUDE in line for line in includes):
        includes.append(_MATH_INCLUDE)

    if not any("#define ceild(n,d)" in line for line in init):
        includes.extend([_CEILD_DEFINE, _FLOORD_DEFINE])

    if not any("#define max(x,y)" in line for line in init):
        includes.extend([_MAX_DEFINE, _MIN_DEFINE])

    body = _preprocess_body(body_lines, cc=cc)

    if not any(_OMP_INCLUDE in line for line in includes):
        includes.append(_OMP_INCLUDE)

    # the shell echoes four command substitutions, each of which lost its
    # trailing blank lines - keep the same shape byte for byte
    includes = _strip_trailing_blank(includes)
    init = _strip_trailing_blank(init)
    body = _strip_trailing_blank(body)
    tail = _strip_trailing_blank(tail)

    sections = "\n".join(includes) + "\n" + "\n".join(init) + "\n" + "\n".join(body) + "\n" + "\n".join(tail) + "\n"
    return sections


class PlutoDriver:
    """Run the PLCG pluto binary and assemble the kernel skeleton."""

    def __init__(self, pluto_dir: str | os.PathLike, cc: str = "gcc"):
        self.pluto_dir = Path(pluto_dir)
        self.pluto_bin = self.pluto_dir / "tool" / "pluto"
        self.cc = cc
        if not self.pluto_bin.exists():
            raise PlutoDriverError(f"pluto binary not found: {self.pluto_bin}")

    def run(
        self,
        kernel_c: str | os.PathLike,
        out_c: str | os.PathLike,
        stdout_path: str | os.PathLike,
        options: list[str],
        timeout: int | None = None,
    ) -> None:
        """Optimise one kernel; writes ``out_c`` and ``stdout_path``."""
        kernel_c = Path(kernel_c)
        out_c = Path(out_c)
        stdout_path = Path(stdout_path)

        # Mirror the shell wrapper exactly: pluto is given the *caller's* output
        # path (never an absolute temporary one), and while the assembled kernel
        # still contains a scop the assembled file itself becomes the next
        # input (the wrapper moves it over the source file).
        work = kernel_c
        first_pass = True
        while True:
            proc = subprocess.run(
                [str(self.pluto_bin), str(work), *options, "-o", str(out_c)],
                capture_output=True,
                text=True,
                timeout=timeout,
            )
            # the wrapper redirects every pass to the same file descriptor
            with open(stdout_path, "w" if first_pass else "a") as handle:
                handle.write(proc.stdout)
            first_pass = False

            if proc.returncode != 0:
                raise PlutoDriverError(
                    f"pluto failed (returncode={proc.returncode}): {proc.stderr.strip()}"
                )

            pluto_text = out_c.read_text(errors="surrogateescape")
            if not pluto_text.strip():
                raise PlutoDriverError("pluto produced an empty output file")

            # the skeleton is the *current* input (original first, assembled later)
            skeleton = work.read_text(errors="surrogateescape")
            assembled = assemble_kernel(skeleton, pluto_text, cc=self.cc)
            out_c.write_text(assembled, errors="surrogateescape")
            if not _SCOP_RE.search(assembled):
                return
            work = out_c


def _parse_cli(argv: list[str]) -> tuple[list[str], Path]:
    """Split ``<kernel> [options] -o <out>`` into (argv for pluto, out path)."""
    out: Path | None = None
    pluto_args: list[str] = []
    i = 0
    while i < len(argv):
        arg = argv[i]
        if arg in ("-o", "--output"):
            out = Path(argv[i + 1])
            i += 2
            continue
        if arg.startswith("--output="):
            out = Path(arg.split("=", 1)[1])
            i += 1
            continue
        pluto_args.append(arg)
        i += 1
    if not pluto_args:
        raise SystemExit("usage: pluto_driver.py <kernel.c> [pluto options] -o <output.c>")
    if out is None:
        out = Path(pluto_args[0]).with_suffix("").with_suffix(".pluto.c")
    return pluto_args, out


def main(argv: list[str] | None = None) -> int:
    argv = list(sys.argv[1:] if argv is None else argv)
    pluto_args, out_c = _parse_cli(argv)
    kernel_c = Path(pluto_args[0])
    pluto_dir = Path(__file__).resolve().parent.parent / "Compilers" / "pluto"
    driver = PlutoDriver(pluto_dir)
    stdout_path = out_c.with_suffix(".stdout")
    try:
        driver.run(kernel_c, out_c, stdout_path, pluto_args[1:])
    except PlutoDriverError as exc:
        print(f"pluto_driver: {exc}", file=sys.stderr)
        return 1
    except subprocess.TimeoutExpired:
        print("pluto_driver: timeout", file=sys.stderr)
        return 124
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
