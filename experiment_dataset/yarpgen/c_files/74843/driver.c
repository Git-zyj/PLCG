#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1411664594;
short var_5 = (short)-17667;
unsigned long long int var_6 = 3572369321238155127ULL;
signed char var_7 = (signed char)78;
unsigned int var_13 = 1852184944U;
int zero = 0;
unsigned long long int var_15 = 10274547725134980469ULL;
signed char var_16 = (signed char)97;
int var_17 = -253857227;
short var_18 = (short)21993;
unsigned int var_19 = 1370725902U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
