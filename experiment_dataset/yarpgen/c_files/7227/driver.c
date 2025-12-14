#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = 789086345;
int var_11 = -1762043303;
int var_19 = -265593198;
int zero = 0;
int var_20 = -2115334578;
unsigned long long int var_21 = 1520328392693674008ULL;
signed char var_22 = (signed char)(-127 - 1);
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
