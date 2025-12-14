#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1694973207;
signed char var_3 = (signed char)49;
int var_7 = -2060274990;
int var_11 = 1655220131;
short var_12 = (short)-20326;
int zero = 0;
unsigned short var_15 = (unsigned short)21111;
unsigned int var_16 = 240694426U;
short var_17 = (short)-15158;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
