#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_14 = 2199507789U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-17949;
int zero = 0;
unsigned long long int var_18 = 8527891378295668371ULL;
int var_19 = -1825859166;
void init() {
}

void checksum() {
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
