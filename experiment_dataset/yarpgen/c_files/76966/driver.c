#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7683;
unsigned int var_2 = 2412429481U;
unsigned short var_5 = (unsigned short)57718;
unsigned short var_11 = (unsigned short)23408;
int zero = 0;
unsigned long long int var_14 = 11788190002096584359ULL;
long long int var_15 = 5451356305678648923LL;
unsigned long long int var_16 = 9543904850541491430ULL;
long long int var_17 = -7510345874299204664LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
