#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2016930562574845197ULL;
unsigned int var_2 = 3373233047U;
int var_3 = 447868210;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2918501142U;
int var_8 = 1024072257;
int zero = 0;
short var_17 = (short)19564;
short var_18 = (short)-6854;
long long int var_19 = -2995896852360388277LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
