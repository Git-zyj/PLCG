#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11495263926892687189ULL;
signed char var_4 = (signed char)55;
int zero = 0;
unsigned long long int var_10 = 2546856835200461215ULL;
unsigned long long int var_11 = 1684571262803723407ULL;
unsigned long long int var_12 = 1529310718487231929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
