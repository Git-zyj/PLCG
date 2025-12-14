#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15146;
unsigned int var_6 = 40588087U;
unsigned int var_7 = 1849938801U;
unsigned int var_10 = 936403191U;
short var_12 = (short)-20034;
unsigned int var_13 = 977672844U;
short var_15 = (short)27112;
int zero = 0;
int var_16 = 317384157;
short var_17 = (short)-18531;
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
