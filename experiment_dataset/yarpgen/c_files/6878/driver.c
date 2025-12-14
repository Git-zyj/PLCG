#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30641;
unsigned int var_1 = 3366534350U;
int zero = 0;
unsigned char var_11 = (unsigned char)198;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2555322164U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
