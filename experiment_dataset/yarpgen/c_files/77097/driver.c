#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2030218367U;
unsigned int var_1 = 3286271574U;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 2837857049U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1130612738U;
int zero = 0;
unsigned int var_12 = 604674737U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-9754;
long long int var_15 = 185681305233797667LL;
unsigned short var_16 = (unsigned short)63010;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
