#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
long long int var_2 = 23649545123684293LL;
long long int var_4 = 2780286404931540507LL;
short var_6 = (short)-7016;
unsigned short var_8 = (unsigned short)50797;
short var_11 = (short)-32014;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)1;
int var_15 = -214191089;
unsigned short var_16 = (unsigned short)35321;
unsigned int var_17 = 2062060129U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
