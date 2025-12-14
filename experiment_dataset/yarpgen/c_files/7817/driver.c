#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2734119893U;
unsigned short var_5 = (unsigned short)39476;
int var_11 = -1124290270;
int zero = 0;
unsigned short var_12 = (unsigned short)6512;
unsigned long long int var_13 = 5134490766703701963ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
