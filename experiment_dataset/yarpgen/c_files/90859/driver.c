#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42750;
short var_1 = (short)16226;
unsigned char var_7 = (unsigned char)54;
short var_8 = (short)-17410;
unsigned char var_9 = (unsigned char)107;
int zero = 0;
unsigned long long int var_16 = 1091309914898660894ULL;
long long int var_17 = -2018714935710327314LL;
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
