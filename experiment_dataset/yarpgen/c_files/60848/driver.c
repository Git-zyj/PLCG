#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 591089370U;
short var_11 = (short)-22695;
long long int var_12 = 4357847280962115662LL;
int var_15 = 81733214;
int zero = 0;
unsigned short var_16 = (unsigned short)46601;
short var_17 = (short)30336;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
