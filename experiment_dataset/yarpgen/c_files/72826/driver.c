#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 756396757U;
unsigned long long int var_6 = 2173831787854614530ULL;
int zero = 0;
short var_13 = (short)-23945;
unsigned short var_14 = (unsigned short)24769;
unsigned int var_15 = 1930364378U;
unsigned int var_16 = 3540128216U;
unsigned int var_17 = 1602691325U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
