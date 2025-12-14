#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15593;
unsigned char var_4 = (unsigned char)24;
unsigned int var_10 = 2165154563U;
int zero = 0;
short var_16 = (short)15515;
short var_17 = (short)-1050;
short var_18 = (short)-10379;
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
