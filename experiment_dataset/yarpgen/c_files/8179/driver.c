#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1907509901;
signed char var_12 = (signed char)-2;
int zero = 0;
unsigned short var_14 = (unsigned short)10682;
unsigned int var_15 = 4007673243U;
unsigned int var_16 = 2508742972U;
unsigned short var_17 = (unsigned short)29545;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
