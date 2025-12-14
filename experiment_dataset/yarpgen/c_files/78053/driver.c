#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2278193501U;
long long int var_12 = -6992118224295520647LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 681830001U;
unsigned short var_17 = (unsigned short)48610;
void init() {
}

void checksum() {
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
