#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)21;
_Bool var_3 = (_Bool)0;
int var_4 = -1018307952;
unsigned short var_7 = (unsigned short)24558;
unsigned int var_8 = 1562565167U;
unsigned short var_11 = (unsigned short)41198;
_Bool var_12 = (_Bool)0;
int var_14 = -400625149;
long long int var_15 = 8186782256503757754LL;
long long int var_16 = -2838713397609123314LL;
int zero = 0;
short var_20 = (short)-13849;
int var_21 = -895865558;
signed char var_22 = (signed char)25;
unsigned short var_23 = (unsigned short)31763;
long long int var_24 = -7425638089881437913LL;
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
