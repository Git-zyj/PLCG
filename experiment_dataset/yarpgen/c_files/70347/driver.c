#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-16598;
int var_10 = 1095207069;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 9857192931139913195ULL;
unsigned int var_16 = 2467040376U;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-25733;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
