#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1737323882U;
int var_4 = 1436691237;
short var_5 = (short)22110;
unsigned int var_7 = 1961251610U;
int var_10 = 1312326061;
unsigned char var_11 = (unsigned char)6;
unsigned char var_12 = (unsigned char)242;
int zero = 0;
short var_15 = (short)-1897;
unsigned short var_16 = (unsigned short)48940;
short var_17 = (short)2993;
void init() {
}

void checksum() {
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
