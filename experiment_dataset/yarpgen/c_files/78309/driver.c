#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-16808;
int var_10 = 221394819;
signed char var_13 = (signed char)84;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 2486964639U;
short var_18 = (short)-15477;
int var_19 = -266846686;
int zero = 0;
short var_20 = (short)8525;
signed char var_21 = (signed char)113;
short var_22 = (short)-26753;
int var_23 = -227217059;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
