#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1858947710U;
unsigned short var_7 = (unsigned short)26140;
unsigned int var_8 = 3274739418U;
short var_11 = (short)-22491;
short var_15 = (short)32373;
short var_17 = (short)9597;
int zero = 0;
unsigned int var_20 = 1245762718U;
int var_21 = 1982753546;
unsigned short var_22 = (unsigned short)48979;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
