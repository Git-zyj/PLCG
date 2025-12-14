#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 742620965U;
short var_1 = (short)-6571;
short var_4 = (short)-4814;
int var_6 = 1876821989;
short var_9 = (short)-25249;
signed char var_10 = (signed char)-68;
int zero = 0;
int var_11 = -546781999;
unsigned char var_12 = (unsigned char)73;
unsigned char var_13 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
