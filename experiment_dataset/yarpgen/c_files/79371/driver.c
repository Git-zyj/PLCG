#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22815;
short var_2 = (short)-23568;
unsigned short var_4 = (unsigned short)46979;
unsigned long long int var_5 = 5327323529542819563ULL;
signed char var_12 = (signed char)24;
unsigned long long int var_13 = 2320239508261630569ULL;
unsigned char var_15 = (unsigned char)161;
int zero = 0;
unsigned int var_16 = 877905577U;
int var_17 = -1804513996;
unsigned char var_18 = (unsigned char)63;
signed char var_19 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
