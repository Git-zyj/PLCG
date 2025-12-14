#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10490842515858619382ULL;
int var_3 = -2082303643;
unsigned int var_5 = 2441537099U;
unsigned char var_6 = (unsigned char)179;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)99;
long long int var_13 = 7264841237844395506LL;
short var_14 = (short)30121;
unsigned short var_15 = (unsigned short)58560;
short var_17 = (short)24852;
int zero = 0;
int var_20 = -93834969;
signed char var_21 = (signed char)-53;
unsigned char var_22 = (unsigned char)29;
int var_23 = -386319761;
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
