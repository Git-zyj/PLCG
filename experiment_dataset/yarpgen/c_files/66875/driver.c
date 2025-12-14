#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 764501286;
unsigned char var_3 = (unsigned char)205;
unsigned short var_4 = (unsigned short)17607;
unsigned long long int var_7 = 4860812354346854006ULL;
signed char var_10 = (signed char)58;
unsigned short var_11 = (unsigned short)48748;
unsigned short var_12 = (unsigned short)45417;
int var_14 = 334540648;
int zero = 0;
unsigned short var_15 = (unsigned short)41531;
long long int var_16 = 1612499674991069482LL;
unsigned int var_17 = 3112621923U;
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
