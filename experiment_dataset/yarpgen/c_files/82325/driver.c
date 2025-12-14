#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3215950660U;
unsigned long long int var_8 = 18413905490413631723ULL;
int var_15 = 2009403813;
int zero = 0;
unsigned int var_17 = 462657015U;
long long int var_18 = 1381152689309869126LL;
long long int var_19 = 3754448579472149561LL;
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
