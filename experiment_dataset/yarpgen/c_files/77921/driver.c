#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11060474621135656180ULL;
int var_3 = -1051228210;
signed char var_4 = (signed char)87;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-17234;
signed char var_13 = (signed char)84;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
int var_20 = -237841678;
long long int var_21 = 6159534346183969083LL;
unsigned int var_22 = 91512174U;
void init() {
}

void checksum() {
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
