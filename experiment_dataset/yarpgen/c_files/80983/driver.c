#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 876954026U;
unsigned int var_5 = 496132806U;
unsigned int var_8 = 2856743042U;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3519192286U;
unsigned int var_18 = 3230367468U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
