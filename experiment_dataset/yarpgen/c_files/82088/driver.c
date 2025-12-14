#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32170;
signed char var_2 = (signed char)69;
short var_3 = (short)1867;
unsigned char var_4 = (unsigned char)3;
short var_5 = (short)10263;
short var_6 = (short)-7624;
short var_7 = (short)-3066;
long long int var_9 = 2319448579156391038LL;
short var_10 = (short)15305;
int zero = 0;
unsigned int var_11 = 409310515U;
unsigned int var_12 = 2349593638U;
short var_13 = (short)-3235;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
