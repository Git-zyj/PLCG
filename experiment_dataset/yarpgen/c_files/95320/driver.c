#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned char var_4 = (unsigned char)250;
unsigned int var_5 = 3563956313U;
long long int var_10 = 1211009971106355186LL;
_Bool var_11 = (_Bool)1;
long long int var_13 = -3594018266130201475LL;
unsigned long long int var_15 = 18114098744144228864ULL;
signed char var_18 = (signed char)127;
int zero = 0;
unsigned short var_20 = (unsigned short)35625;
_Bool var_21 = (_Bool)0;
int var_22 = -1692668329;
signed char var_23 = (signed char)122;
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
