#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -6283331252164855791LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 8021806711448161093ULL;
long long int var_6 = -993933975319931175LL;
long long int var_7 = 7466080369377113186LL;
long long int var_9 = 2192233706534182661LL;
int zero = 0;
unsigned int var_14 = 647063057U;
int var_15 = 1830005966;
long long int var_16 = 3401861779773287108LL;
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
