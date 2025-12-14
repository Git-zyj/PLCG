#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 208333351U;
short var_6 = (short)19272;
unsigned long long int var_9 = 2200051080558644813ULL;
short var_11 = (short)-32723;
long long int var_13 = -7648877266557807974LL;
int zero = 0;
short var_14 = (short)-9810;
unsigned char var_15 = (unsigned char)171;
unsigned int var_16 = 3499026737U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
