#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33779;
signed char var_1 = (signed char)42;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)96;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 18318805784851580572ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-13379;
unsigned int var_13 = 2763581497U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
