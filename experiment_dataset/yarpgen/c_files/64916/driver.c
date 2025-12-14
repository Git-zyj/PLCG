#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2471976510U;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-773;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)233;
short var_8 = (short)-17119;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
unsigned int var_11 = 1476725036U;
unsigned short var_12 = (unsigned short)61875;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
