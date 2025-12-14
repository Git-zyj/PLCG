#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -468794860;
short var_5 = (short)-2954;
unsigned char var_13 = (unsigned char)101;
unsigned char var_16 = (unsigned char)116;
int zero = 0;
unsigned char var_17 = (unsigned char)201;
short var_18 = (short)-18175;
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
