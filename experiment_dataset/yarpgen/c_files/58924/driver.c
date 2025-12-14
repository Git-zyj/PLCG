#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62733;
long long int var_4 = -1898687403824027786LL;
unsigned char var_7 = (unsigned char)190;
unsigned long long int var_11 = 9423799781128285216ULL;
unsigned char var_12 = (unsigned char)236;
short var_16 = (short)20965;
int var_19 = -2133617288;
int zero = 0;
unsigned int var_20 = 493226849U;
int var_21 = -269320506;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
