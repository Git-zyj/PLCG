#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)7;
int var_10 = -2043865321;
unsigned long long int var_13 = 561337299052223052ULL;
unsigned int var_15 = 1395218980U;
int var_16 = 607688720;
int zero = 0;
unsigned short var_17 = (unsigned short)33117;
unsigned int var_18 = 2534386487U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
