#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3852031662425752020ULL;
unsigned int var_5 = 2962095455U;
short var_7 = (short)-5545;
int zero = 0;
long long int var_13 = -2001201003431633168LL;
short var_14 = (short)14960;
short var_15 = (short)26518;
unsigned int var_16 = 1721186438U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
