#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7592;
_Bool var_7 = (_Bool)1;
unsigned long long int var_15 = 348274183102569103ULL;
long long int var_17 = 8294444429392709688LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)16342;
long long int var_22 = -1197661751241650162LL;
short var_23 = (short)-22980;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
