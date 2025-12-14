#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_12 = (short)17073;
int var_13 = 579607743;
int var_17 = -724039672;
int var_18 = 242345957;
int zero = 0;
short var_19 = (short)-23835;
signed char var_20 = (signed char)30;
int var_21 = -2035840214;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
