#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6986745258710547959ULL;
unsigned long long int var_3 = 16562494154791998957ULL;
unsigned short var_6 = (unsigned short)51199;
int var_10 = 659724809;
unsigned int var_11 = 947610685U;
short var_12 = (short)24473;
unsigned short var_14 = (unsigned short)45343;
unsigned long long int var_15 = 13136579035394513183ULL;
int var_16 = 1067971146;
unsigned char var_17 = (unsigned char)144;
int zero = 0;
int var_20 = -292667750;
unsigned int var_21 = 594699458U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
