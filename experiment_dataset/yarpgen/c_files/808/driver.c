#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32066;
unsigned long long int var_1 = 14252271323660346541ULL;
short var_9 = (short)23096;
unsigned int var_12 = 2754839315U;
int zero = 0;
short var_14 = (short)-8756;
unsigned long long int var_15 = 1443238795456559552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
