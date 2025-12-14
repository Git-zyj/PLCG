#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10370533591786401444ULL;
unsigned long long int var_1 = 18380609333437722511ULL;
short var_2 = (short)28227;
long long int var_3 = -2144559409756761792LL;
unsigned char var_7 = (unsigned char)83;
unsigned char var_8 = (unsigned char)47;
unsigned char var_9 = (unsigned char)95;
unsigned long long int var_11 = 4054082220105708131ULL;
int var_14 = 2139432039;
int zero = 0;
short var_15 = (short)-13607;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
