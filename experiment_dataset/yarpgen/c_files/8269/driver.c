#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1368220699U;
int var_5 = 1183710763;
signed char var_8 = (signed char)-108;
signed char var_12 = (signed char)-61;
int zero = 0;
int var_20 = 798295169;
unsigned int var_21 = 1972852845U;
unsigned long long int var_22 = 16659557197665184331ULL;
unsigned long long int var_23 = 5194027882244705702ULL;
unsigned char var_24 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
