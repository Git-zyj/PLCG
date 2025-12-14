#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)99;
short var_4 = (short)-2533;
signed char var_5 = (signed char)8;
unsigned int var_7 = 2150710573U;
unsigned char var_10 = (unsigned char)59;
unsigned int var_12 = 3172378614U;
signed char var_13 = (signed char)5;
int zero = 0;
unsigned int var_16 = 3806865734U;
short var_17 = (short)27866;
short var_18 = (short)-2305;
int var_19 = -1312356738;
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
