#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)18622;
unsigned short var_5 = (unsigned short)63596;
unsigned short var_12 = (unsigned short)42571;
unsigned int var_14 = 1543318261U;
int zero = 0;
unsigned long long int var_20 = 1852418566697950052ULL;
unsigned short var_21 = (unsigned short)18497;
unsigned long long int var_22 = 4389886322132952827ULL;
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
