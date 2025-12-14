#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12145;
unsigned char var_8 = (unsigned char)4;
short var_10 = (short)9445;
int var_12 = 1378414300;
int zero = 0;
unsigned int var_14 = 610038769U;
unsigned int var_15 = 2671085838U;
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
