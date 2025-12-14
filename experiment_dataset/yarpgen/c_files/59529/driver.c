#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)87;
unsigned int var_2 = 3441947146U;
short var_6 = (short)-23891;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1136074018U;
signed char var_18 = (signed char)-100;
unsigned int var_19 = 2044335149U;
void init() {
}

void checksum() {
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
