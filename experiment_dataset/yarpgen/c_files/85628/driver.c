#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3398365286U;
short var_3 = (short)-14193;
unsigned long long int var_4 = 1658266927882388562ULL;
unsigned char var_5 = (unsigned char)227;
unsigned char var_13 = (unsigned char)55;
int zero = 0;
unsigned char var_19 = (unsigned char)194;
unsigned int var_20 = 2872100052U;
long long int var_21 = -2516905744822760112LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
