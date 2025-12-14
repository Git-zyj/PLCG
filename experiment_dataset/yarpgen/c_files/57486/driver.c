#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-26;
long long int var_7 = 28169625399611464LL;
long long int var_15 = -8092517731415358734LL;
int zero = 0;
short var_17 = (short)-10226;
short var_18 = (short)-9739;
_Bool var_19 = (_Bool)0;
int var_20 = 1483140247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
