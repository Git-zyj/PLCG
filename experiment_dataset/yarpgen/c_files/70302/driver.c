#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3613174553263072933LL;
short var_8 = (short)21480;
unsigned long long int var_9 = 14876299339040296983ULL;
unsigned char var_11 = (unsigned char)165;
unsigned char var_13 = (unsigned char)107;
unsigned char var_15 = (unsigned char)243;
int zero = 0;
short var_16 = (short)-28812;
unsigned short var_17 = (unsigned short)56587;
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
