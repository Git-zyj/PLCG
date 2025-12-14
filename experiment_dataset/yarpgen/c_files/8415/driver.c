#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12780763050062388503ULL;
unsigned char var_5 = (unsigned char)245;
unsigned short var_8 = (unsigned short)46199;
short var_10 = (short)-18325;
int zero = 0;
unsigned long long int var_11 = 12267173047862207551ULL;
signed char var_12 = (signed char)19;
unsigned int var_13 = 2765204920U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
