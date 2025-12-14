#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned short var_5 = (unsigned short)25027;
short var_7 = (short)-22111;
int var_10 = 536128381;
unsigned char var_15 = (unsigned char)31;
int zero = 0;
unsigned char var_16 = (unsigned char)134;
unsigned int var_17 = 1865433769U;
unsigned short var_18 = (unsigned short)14077;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
