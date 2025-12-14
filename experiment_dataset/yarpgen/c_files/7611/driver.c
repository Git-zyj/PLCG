#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10890587160238594797ULL;
unsigned long long int var_9 = 10660557372218775946ULL;
unsigned short var_10 = (unsigned short)34715;
int zero = 0;
unsigned int var_15 = 3301082052U;
unsigned int var_16 = 2670343972U;
short var_17 = (short)12886;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
