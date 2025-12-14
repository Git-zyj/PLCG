#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6037;
long long int var_6 = 8193868983150822745LL;
unsigned long long int var_7 = 12020246876864900001ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)60746;
short var_17 = (short)-7616;
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
