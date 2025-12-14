#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)37291;
unsigned int var_9 = 1529957680U;
unsigned short var_10 = (unsigned short)33002;
unsigned int var_11 = 3371435463U;
int zero = 0;
unsigned int var_12 = 1732398935U;
unsigned int var_13 = 3390280404U;
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
