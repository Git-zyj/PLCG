#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -803227535;
short var_8 = (short)-8388;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4803500642506623930LL;
unsigned int var_16 = 2704534090U;
int zero = 0;
signed char var_18 = (signed char)13;
short var_19 = (short)6224;
unsigned int var_20 = 789207612U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
