#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)2;
int var_8 = 1963524368;
signed char var_10 = (signed char)87;
unsigned int var_11 = 774936707U;
short var_12 = (short)10959;
unsigned long long int var_14 = 18047773924458338853ULL;
short var_15 = (short)24197;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)65;
unsigned short var_19 = (unsigned short)59311;
int var_20 = -1475430047;
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
