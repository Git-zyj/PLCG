#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
int var_3 = 1823760274;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1764833821U;
int var_7 = -2110659989;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 730290326U;
int zero = 0;
int var_13 = 773896330;
int var_14 = -1465025493;
unsigned int var_15 = 496793164U;
int var_16 = 2066791674;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
