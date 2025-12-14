#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 420506130U;
int var_14 = 1447317391;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-24;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3791887733U;
int var_21 = 745247989;
unsigned int var_22 = 2956819339U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
