#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 229661046U;
_Bool var_5 = (_Bool)0;
short var_14 = (short)-27603;
int var_18 = -1629552979;
int zero = 0;
short var_20 = (short)30642;
short var_21 = (short)12723;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
