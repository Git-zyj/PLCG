#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 863035327;
unsigned char var_8 = (unsigned char)218;
int var_11 = 185334765;
unsigned long long int var_14 = 11867906952018589548ULL;
int zero = 0;
signed char var_17 = (signed char)73;
unsigned int var_18 = 2111544001U;
void init() {
}

void checksum() {
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
