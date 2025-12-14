#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 406374019;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1784376585U;
int var_13 = -2050704120;
long long int var_15 = -6431942260553901304LL;
int zero = 0;
unsigned short var_16 = (unsigned short)63071;
unsigned int var_17 = 3506174681U;
long long int var_18 = -3192471120096517180LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
