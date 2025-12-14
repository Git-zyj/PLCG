#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 505877055;
short var_6 = (short)25660;
short var_8 = (short)-13952;
long long int var_12 = 9103225518891642781LL;
int zero = 0;
int var_14 = 1671369257;
unsigned int var_15 = 4278856021U;
unsigned long long int var_16 = 4122317351735687694ULL;
void init() {
}

void checksum() {
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
