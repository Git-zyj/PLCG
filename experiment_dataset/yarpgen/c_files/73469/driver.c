#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1317169501U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)28759;
unsigned short var_6 = (unsigned short)30812;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)9948;
unsigned char var_11 = (unsigned char)146;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2850466488U;
int zero = 0;
short var_19 = (short)-18303;
int var_20 = -25064045;
unsigned int var_21 = 1472135576U;
unsigned int var_22 = 1959273613U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
