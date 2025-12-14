#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = -698587375471816112LL;
unsigned long long int var_6 = 5268821643573203488ULL;
int var_11 = -14417949;
unsigned short var_12 = (unsigned short)55669;
int zero = 0;
unsigned int var_14 = 2793754332U;
unsigned char var_15 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
