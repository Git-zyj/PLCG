#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)236;
unsigned long long int var_8 = 17476992784015468440ULL;
unsigned int var_11 = 1717301175U;
short var_12 = (short)16005;
unsigned int var_15 = 1702730194U;
unsigned long long int var_16 = 8893558151049022568ULL;
signed char var_19 = (signed char)97;
int zero = 0;
unsigned long long int var_20 = 15247720815475719171ULL;
unsigned char var_21 = (unsigned char)74;
short var_22 = (short)-4840;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
