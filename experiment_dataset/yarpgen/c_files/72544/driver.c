#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1060601553U;
unsigned short var_6 = (unsigned short)63985;
unsigned long long int var_7 = 7613333913278001050ULL;
short var_17 = (short)-16641;
int zero = 0;
short var_18 = (short)13778;
unsigned long long int var_19 = 17972098397859947257ULL;
void init() {
}

void checksum() {
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
