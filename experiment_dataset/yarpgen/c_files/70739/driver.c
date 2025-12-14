#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2991266056U;
unsigned int var_12 = 817022174U;
long long int var_14 = -2536254424833864402LL;
int zero = 0;
unsigned int var_15 = 1251042682U;
long long int var_16 = -2564450086096904866LL;
unsigned long long int var_17 = 9589359354628816547ULL;
unsigned short var_18 = (unsigned short)11875;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
