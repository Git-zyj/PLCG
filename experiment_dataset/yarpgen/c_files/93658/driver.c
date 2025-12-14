#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19934;
short var_5 = (short)28548;
unsigned short var_10 = (unsigned short)2445;
long long int var_11 = -6570613907958913997LL;
signed char var_13 = (signed char)79;
int zero = 0;
unsigned int var_14 = 2658450470U;
unsigned char var_15 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
