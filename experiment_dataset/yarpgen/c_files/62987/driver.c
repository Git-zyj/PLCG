#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14867002354635902188ULL;
int var_5 = 1463070964;
signed char var_6 = (signed char)59;
unsigned short var_12 = (unsigned short)43989;
unsigned int var_14 = 1435431518U;
short var_15 = (short)-5715;
unsigned int var_16 = 2167728253U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11095784354489740756ULL;
unsigned int var_20 = 1048630237U;
unsigned int var_21 = 1722802082U;
signed char var_22 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
