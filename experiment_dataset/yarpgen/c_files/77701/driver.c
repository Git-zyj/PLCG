#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27696;
unsigned long long int var_1 = 4589842003170073330ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)223;
unsigned long long int var_6 = 1526751004701001202ULL;
short var_8 = (short)-26898;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-7665;
unsigned char var_12 = (unsigned char)42;
unsigned int var_13 = 2068013010U;
unsigned int var_14 = 2112747809U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
