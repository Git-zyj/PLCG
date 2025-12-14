#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1922121621U;
signed char var_3 = (signed char)6;
int var_6 = -1632549141;
unsigned int var_8 = 4197302691U;
unsigned long long int var_11 = 311576142243728389ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)40305;
int var_15 = 529385393;
unsigned short var_16 = (unsigned short)46455;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
