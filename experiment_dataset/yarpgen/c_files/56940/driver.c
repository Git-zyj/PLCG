#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1246791494;
short var_5 = (short)30914;
int var_11 = -1665390624;
int zero = 0;
unsigned short var_12 = (unsigned short)32344;
unsigned int var_13 = 2789710783U;
short var_14 = (short)-28366;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
