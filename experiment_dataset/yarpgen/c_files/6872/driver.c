#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1566607449;
unsigned short var_3 = (unsigned short)44180;
unsigned char var_4 = (unsigned char)49;
unsigned char var_11 = (unsigned char)131;
short var_12 = (short)12105;
unsigned short var_14 = (unsigned short)42860;
int var_15 = -1040132929;
int zero = 0;
unsigned char var_16 = (unsigned char)91;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)15538;
unsigned int var_19 = 501482985U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
