#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3259060755686049001LL;
unsigned int var_3 = 2099470093U;
signed char var_5 = (signed char)-41;
short var_6 = (short)12494;
signed char var_7 = (signed char)-88;
signed char var_8 = (signed char)-73;
_Bool var_10 = (_Bool)0;
short var_11 = (short)8586;
int zero = 0;
long long int var_12 = -2291179664297336334LL;
unsigned short var_13 = (unsigned short)29704;
_Bool var_14 = (_Bool)0;
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
