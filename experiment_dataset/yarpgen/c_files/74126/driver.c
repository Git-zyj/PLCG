#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5940080079145464825LL;
short var_4 = (short)-14346;
unsigned int var_6 = 1880843486U;
int var_12 = -614665410;
int var_15 = 1265207967;
int zero = 0;
unsigned char var_16 = (unsigned char)9;
int var_17 = -1757377038;
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
