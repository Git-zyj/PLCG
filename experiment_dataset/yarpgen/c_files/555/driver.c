#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)11909;
unsigned int var_6 = 1035247376U;
_Bool var_9 = (_Bool)1;
int var_10 = -1966811380;
int var_13 = -1504839243;
_Bool var_15 = (_Bool)0;
short var_16 = (short)9728;
unsigned short var_17 = (unsigned short)28002;
signed char var_18 = (signed char)-94;
unsigned short var_19 = (unsigned short)6284;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)19650;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
