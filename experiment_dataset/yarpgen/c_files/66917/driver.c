#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
unsigned char var_3 = (unsigned char)113;
short var_4 = (short)-26734;
unsigned int var_5 = 2532490016U;
unsigned long long int var_6 = 1786292850260576190ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)5048;
unsigned long long int var_10 = 2365294710107510917ULL;
int zero = 0;
short var_12 = (short)-22093;
signed char var_13 = (signed char)-64;
unsigned long long int var_14 = 14102914112600056726ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
