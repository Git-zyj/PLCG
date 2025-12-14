#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-3129;
short var_4 = (short)-7774;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 418196123U;
signed char var_8 = (signed char)10;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1400161738U;
short var_13 = (short)4339;
unsigned int var_14 = 3478820543U;
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
