#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45814;
unsigned int var_4 = 3166191363U;
long long int var_8 = 5909755948552874207LL;
unsigned short var_10 = (unsigned short)58990;
int zero = 0;
short var_12 = (short)-13402;
unsigned int var_13 = 3043913680U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)43;
void init() {
}

void checksum() {
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
