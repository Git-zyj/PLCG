#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1972614558U;
unsigned long long int var_8 = 496176096194217458ULL;
unsigned short var_10 = (unsigned short)12768;
int zero = 0;
unsigned short var_13 = (unsigned short)55599;
unsigned long long int var_14 = 3108777295042619918ULL;
signed char var_15 = (signed char)70;
long long int var_16 = -5665846386481287093LL;
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
