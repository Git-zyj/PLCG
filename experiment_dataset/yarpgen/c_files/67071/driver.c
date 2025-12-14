#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 951364796U;
long long int var_10 = -5945003395234705153LL;
int var_13 = -1483526067;
int var_18 = -1227885137;
int zero = 0;
signed char var_20 = (signed char)-107;
int var_21 = -1689233344;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
