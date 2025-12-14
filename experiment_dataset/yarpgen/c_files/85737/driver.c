#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30030;
short var_1 = (short)-7574;
long long int var_6 = 3395139741373875505LL;
_Bool var_9 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 1034610901205573546LL;
unsigned int var_16 = 2545985892U;
void init() {
}

void checksum() {
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
