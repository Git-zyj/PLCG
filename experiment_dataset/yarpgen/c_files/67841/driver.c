#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-17870;
long long int var_6 = 1982949562862216323LL;
unsigned long long int var_7 = 9218960296568788120ULL;
int zero = 0;
unsigned int var_11 = 3184263428U;
unsigned long long int var_12 = 6764618447278495214ULL;
long long int var_13 = 6580619628954553243LL;
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
