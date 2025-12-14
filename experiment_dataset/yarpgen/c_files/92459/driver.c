#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3111584395U;
long long int var_1 = 9193678763027145203LL;
signed char var_2 = (signed char)56;
short var_4 = (short)25841;
unsigned int var_5 = 1931445375U;
unsigned short var_6 = (unsigned short)15726;
signed char var_10 = (signed char)11;
long long int var_12 = -7489475067460060932LL;
int zero = 0;
unsigned long long int var_14 = 16392601101088261174ULL;
short var_15 = (short)-29579;
unsigned short var_16 = (unsigned short)45770;
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
