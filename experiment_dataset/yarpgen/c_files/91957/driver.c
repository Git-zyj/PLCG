#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_14 = (short)-12589;
unsigned int var_15 = 3815942816U;
unsigned char var_16 = (unsigned char)80;
unsigned int var_19 = 1037267692U;
int zero = 0;
short var_20 = (short)29590;
short var_21 = (short)20000;
short var_22 = (short)-5283;
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
