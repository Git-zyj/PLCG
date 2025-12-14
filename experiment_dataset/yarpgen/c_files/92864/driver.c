#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 16121135209886035895ULL;
signed char var_11 = (signed char)49;
int zero = 0;
unsigned int var_16 = 1551819046U;
unsigned int var_17 = 610188159U;
unsigned long long int var_18 = 14713273884247867691ULL;
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
