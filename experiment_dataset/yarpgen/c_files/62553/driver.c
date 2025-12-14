#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
unsigned int var_3 = 3092058681U;
short var_4 = (short)-10720;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)9333;
long long int var_7 = -9081026611358686392LL;
long long int var_10 = 3325620998699673342LL;
unsigned short var_12 = (unsigned short)26922;
long long int var_14 = -2942880962034876503LL;
short var_15 = (short)30941;
int zero = 0;
unsigned short var_16 = (unsigned short)30032;
long long int var_17 = -3077538880935932991LL;
void init() {
}

void checksum() {
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
