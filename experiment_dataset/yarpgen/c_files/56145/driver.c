#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61378;
unsigned char var_6 = (unsigned char)33;
unsigned long long int var_8 = 14692522444386710609ULL;
int var_10 = 1846577923;
int zero = 0;
int var_11 = 1143590855;
unsigned long long int var_12 = 8713905712377681575ULL;
unsigned long long int var_13 = 6407222145451419852ULL;
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
