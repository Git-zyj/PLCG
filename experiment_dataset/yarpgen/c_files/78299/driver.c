#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21710;
unsigned int var_1 = 730259842U;
long long int var_2 = -5150792529591420171LL;
long long int var_3 = -6867676566214153200LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)7091;
unsigned long long int var_6 = 16857190073147127245ULL;
long long int var_7 = -7815026738668596050LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1686592787U;
unsigned short var_11 = (unsigned short)28534;
int zero = 0;
short var_12 = (short)1423;
int var_13 = 1124129102;
unsigned char var_14 = (unsigned char)40;
short var_15 = (short)-7845;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
