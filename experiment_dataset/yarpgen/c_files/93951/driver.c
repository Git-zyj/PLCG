#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
short var_2 = (short)-17824;
unsigned char var_3 = (unsigned char)200;
unsigned char var_4 = (unsigned char)83;
unsigned char var_10 = (unsigned char)238;
unsigned char var_14 = (unsigned char)157;
int zero = 0;
long long int var_16 = -7894029487720276969LL;
unsigned char var_17 = (unsigned char)148;
void init() {
}

void checksum() {
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
