#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 956639623U;
unsigned long long int var_1 = 9273447577379674289ULL;
unsigned int var_2 = 4269200070U;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-113;
signed char var_9 = (signed char)4;
int var_10 = -1795177479;
int zero = 0;
unsigned int var_11 = 2355206009U;
unsigned int var_12 = 2353765532U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
