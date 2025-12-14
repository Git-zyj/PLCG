#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1639556691U;
unsigned long long int var_13 = 6065256032208206125ULL;
unsigned long long int var_14 = 2021791921094731674ULL;
int zero = 0;
unsigned int var_16 = 2901320182U;
unsigned int var_17 = 24727449U;
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
