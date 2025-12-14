#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16611388160201750527ULL;
unsigned char var_1 = (unsigned char)84;
long long int var_7 = -8167005947053068369LL;
unsigned short var_11 = (unsigned short)25509;
unsigned int var_12 = 3480460564U;
int zero = 0;
long long int var_15 = -7112599309910639340LL;
unsigned char var_16 = (unsigned char)202;
unsigned short var_17 = (unsigned short)28483;
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
