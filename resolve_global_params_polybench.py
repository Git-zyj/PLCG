"""Resolve global parameter values for polybench .h files.

This module is kept for backward compatibility.
All resolver classes are now in resolve_global_params.py.
"""

from resolve_global_params import (
    PolybenchResolver,
    TsvcResolver,
    LoreResolver,
)

# Legacy alias
ResolveGlobalParamsPolybench = PolybenchResolver
