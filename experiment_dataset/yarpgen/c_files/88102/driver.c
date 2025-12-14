#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -3607223958595055939LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)6333;
short var_8 = (short)1854;
short var_10 = (short)7189;
int var_11 = -890284191;
int zero = 0;
signed char var_12 = (signed char)-96;
unsigned int var_13 = 3206461985U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
