#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16278;
short var_1 = (short)6810;
int var_4 = -578830883;
unsigned int var_9 = 2208084501U;
unsigned short var_11 = (unsigned short)43714;
int var_14 = 602971355;
int zero = 0;
short var_16 = (short)19757;
short var_17 = (short)-9347;
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
