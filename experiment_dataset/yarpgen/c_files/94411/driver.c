#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1454472429;
long long int var_4 = -2379934201810582934LL;
unsigned int var_5 = 2492674565U;
short var_13 = (short)-641;
int zero = 0;
int var_15 = -1875430027;
unsigned int var_16 = 2305914268U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
