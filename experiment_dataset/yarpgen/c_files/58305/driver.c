#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 973983494U;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 2100844055U;
short var_8 = (short)-24368;
short var_11 = (short)24267;
long long int var_14 = 6323624023126136608LL;
unsigned char var_16 = (unsigned char)219;
unsigned int var_18 = 1776957583U;
int var_19 = 3353478;
int zero = 0;
unsigned int var_20 = 565943613U;
short var_21 = (short)-15697;
unsigned int var_22 = 3790585882U;
unsigned int var_23 = 3065871127U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
