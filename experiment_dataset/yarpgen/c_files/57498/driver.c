#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)64884;
unsigned char var_8 = (unsigned char)175;
short var_9 = (short)-23992;
int var_10 = 798446954;
unsigned short var_13 = (unsigned short)24762;
short var_14 = (short)-24288;
unsigned long long int var_15 = 13048880055723066363ULL;
int zero = 0;
signed char var_18 = (signed char)62;
unsigned short var_19 = (unsigned short)45550;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)63183;
short var_22 = (short)8448;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
