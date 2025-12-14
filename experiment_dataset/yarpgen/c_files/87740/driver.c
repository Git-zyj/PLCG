#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9001668095987463954ULL;
int var_1 = -1876602137;
unsigned long long int var_5 = 11605497429214154077ULL;
unsigned int var_12 = 1171113666U;
int zero = 0;
unsigned long long int var_15 = 14018785864881126694ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1937201655U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
