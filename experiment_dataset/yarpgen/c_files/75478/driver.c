#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_7 = 2316108318U;
long long int var_8 = -2017003758510663878LL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)56;
int zero = 0;
long long int var_16 = -5315896579893555578LL;
unsigned long long int var_17 = 6283326426429184172ULL;
unsigned char var_18 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
