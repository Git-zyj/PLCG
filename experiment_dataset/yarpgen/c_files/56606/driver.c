#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22678;
int var_9 = 1047147970;
int zero = 0;
signed char var_14 = (signed char)-107;
unsigned short var_15 = (unsigned short)157;
unsigned long long int var_16 = 11761540771896042269ULL;
unsigned short var_17 = (unsigned short)33317;
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
