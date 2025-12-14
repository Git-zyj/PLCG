#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2253;
int var_1 = 2102756638;
signed char var_4 = (signed char)-74;
unsigned int var_7 = 4105062259U;
signed char var_11 = (signed char)-79;
unsigned short var_15 = (unsigned short)1399;
int zero = 0;
int var_17 = 681167840;
short var_18 = (short)-14422;
unsigned short var_19 = (unsigned short)63318;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
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
