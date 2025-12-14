#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-1099;
int var_4 = 1096819409;
int var_6 = 32357653;
unsigned long long int var_7 = 614767787268149041ULL;
int zero = 0;
signed char var_12 = (signed char)33;
unsigned int var_13 = 388704355U;
unsigned int var_14 = 410380714U;
signed char var_15 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
