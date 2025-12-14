#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
signed char var_2 = (signed char)75;
unsigned int var_3 = 3138158861U;
short var_4 = (short)8491;
short var_6 = (short)-2595;
_Bool var_9 = (_Bool)1;
long long int var_11 = -5069165700006936037LL;
unsigned int var_12 = 3658018131U;
int var_13 = -94865048;
signed char var_14 = (signed char)45;
int zero = 0;
unsigned int var_15 = 2036724050U;
int var_16 = 276184804;
unsigned int var_17 = 493878368U;
unsigned int var_18 = 3244159657U;
int var_19 = -502296138;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
