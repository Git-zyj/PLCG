#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_7 = (short)-29993;
long long int var_8 = -2804889319480254474LL;
unsigned short var_12 = (unsigned short)51208;
unsigned char var_13 = (unsigned char)131;
int zero = 0;
unsigned long long int var_14 = 4154306516021742113ULL;
long long int var_15 = -6427228058516073005LL;
long long int var_16 = 7394000462186552546LL;
unsigned char var_17 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
