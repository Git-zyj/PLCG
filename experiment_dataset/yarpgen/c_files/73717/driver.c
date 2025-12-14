#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 766988844U;
int var_1 = 1587921811;
int var_4 = 293040564;
int var_6 = 1331459172;
unsigned char var_10 = (unsigned char)99;
unsigned int var_13 = 2300433260U;
int var_14 = 28057263;
int zero = 0;
short var_20 = (short)-28730;
unsigned long long int var_21 = 17064280377549522855ULL;
signed char var_22 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
