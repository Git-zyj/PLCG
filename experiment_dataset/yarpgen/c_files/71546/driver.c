#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12448362160054547585ULL;
unsigned char var_4 = (unsigned char)200;
unsigned char var_10 = (unsigned char)133;
unsigned long long int var_12 = 2274636048142200085ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)168;
unsigned long long int var_16 = 4296550355877717214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
