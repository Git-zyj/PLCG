#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1343122883;
int var_4 = 329254083;
unsigned char var_5 = (unsigned char)20;
unsigned int var_6 = 1394285500U;
unsigned int var_7 = 2194523692U;
signed char var_8 = (signed char)24;
short var_12 = (short)30823;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
int var_14 = -1038945311;
unsigned char var_15 = (unsigned char)187;
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
