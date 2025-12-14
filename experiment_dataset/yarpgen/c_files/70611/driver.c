#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53986;
short var_2 = (short)-23655;
long long int var_5 = -2987316393356484603LL;
int var_7 = -1500237738;
unsigned char var_8 = (unsigned char)253;
_Bool var_10 = (_Bool)0;
short var_11 = (short)19081;
unsigned char var_12 = (unsigned char)152;
int var_13 = -1632461799;
int var_14 = 209912374;
int zero = 0;
int var_15 = -156300142;
unsigned short var_16 = (unsigned short)57805;
int var_17 = -1260306471;
unsigned int var_18 = 1856862361U;
unsigned char var_19 = (unsigned char)160;
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
