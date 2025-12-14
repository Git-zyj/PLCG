#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45941;
unsigned short var_7 = (unsigned short)51159;
unsigned int var_11 = 690522231U;
unsigned long long int var_12 = 6562238193857221794ULL;
int zero = 0;
int var_17 = -820968910;
long long int var_18 = -7533569307671785193LL;
long long int var_19 = 1546183696377204854LL;
long long int var_20 = -5831751861675124902LL;
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
