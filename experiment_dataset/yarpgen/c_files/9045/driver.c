#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
short var_2 = (short)-21646;
unsigned short var_3 = (unsigned short)28141;
unsigned int var_4 = 2455265780U;
_Bool var_7 = (_Bool)1;
long long int var_10 = 6837860300305113284LL;
unsigned char var_11 = (unsigned char)250;
short var_13 = (short)-26467;
unsigned short var_14 = (unsigned short)50443;
int var_15 = 570119857;
int zero = 0;
unsigned short var_16 = (unsigned short)48936;
long long int var_17 = 5599088227897451202LL;
short var_18 = (short)19445;
short var_19 = (short)-20438;
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
