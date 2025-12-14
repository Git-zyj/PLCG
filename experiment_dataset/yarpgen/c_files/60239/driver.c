#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19401;
unsigned short var_4 = (unsigned short)8567;
unsigned char var_7 = (unsigned char)88;
short var_8 = (short)30409;
short var_10 = (short)-6530;
short var_11 = (short)-28145;
unsigned char var_12 = (unsigned char)147;
int zero = 0;
unsigned short var_14 = (unsigned short)36607;
unsigned char var_15 = (unsigned char)255;
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
