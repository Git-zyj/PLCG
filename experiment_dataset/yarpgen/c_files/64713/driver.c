#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
unsigned int var_3 = 199315486U;
long long int var_4 = -1925596057028790216LL;
signed char var_7 = (signed char)-94;
int var_11 = 1677233270;
int var_13 = -889396506;
unsigned int var_18 = 3579822866U;
int zero = 0;
signed char var_20 = (signed char)75;
unsigned int var_21 = 1920653692U;
unsigned char var_22 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
