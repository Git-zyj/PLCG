#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1171324092U;
long long int var_6 = 6660270677877450463LL;
unsigned int var_8 = 56186777U;
signed char var_9 = (signed char)123;
long long int var_12 = 4559159440114200034LL;
long long int var_14 = 825337585943921146LL;
int zero = 0;
long long int var_16 = -5225601285253895085LL;
unsigned long long int var_17 = 366470743464314955ULL;
void init() {
}

void checksum() {
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
