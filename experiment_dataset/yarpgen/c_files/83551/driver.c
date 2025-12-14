#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
_Bool var_4 = (_Bool)0;
int var_7 = -54569598;
unsigned short var_9 = (unsigned short)38387;
short var_12 = (short)28170;
unsigned int var_13 = 2061148292U;
unsigned int var_14 = 903163894U;
unsigned short var_15 = (unsigned short)12245;
int var_16 = -1075412756;
int zero = 0;
unsigned short var_17 = (unsigned short)11652;
unsigned short var_18 = (unsigned short)2571;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
short var_21 = (short)2362;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
