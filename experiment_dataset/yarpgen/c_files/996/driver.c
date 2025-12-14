#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)70;
int zero = 0;
short var_11 = (short)-23109;
unsigned int var_12 = 314120564U;
unsigned long long int var_13 = 7438732062069015255ULL;
long long int var_14 = 2033136567709481707LL;
unsigned int var_15 = 3156827126U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
