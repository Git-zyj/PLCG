#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6675672447557641444LL;
short var_1 = (short)-2913;
int var_2 = 851014544;
unsigned char var_5 = (unsigned char)33;
unsigned short var_6 = (unsigned short)8213;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
unsigned short var_11 = (unsigned short)56790;
unsigned char var_12 = (unsigned char)104;
unsigned char var_13 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
