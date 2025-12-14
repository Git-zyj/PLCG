#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
short var_1 = (short)-24372;
int var_5 = 277893414;
unsigned int var_6 = 836127783U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)190;
unsigned short var_10 = (unsigned short)37207;
unsigned char var_11 = (unsigned char)41;
int var_12 = -962272182;
unsigned short var_15 = (unsigned short)43559;
long long int var_17 = -552413448399241464LL;
int zero = 0;
unsigned char var_19 = (unsigned char)141;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-18965;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2025761071U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
