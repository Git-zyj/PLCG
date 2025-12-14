#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4264349237U;
_Bool var_4 = (_Bool)1;
unsigned char var_10 = (unsigned char)103;
int var_13 = 766507985;
unsigned int var_15 = 1211689125U;
int zero = 0;
unsigned char var_17 = (unsigned char)119;
unsigned short var_18 = (unsigned short)6552;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
