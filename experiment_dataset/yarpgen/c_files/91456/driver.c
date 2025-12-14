#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2676341892U;
unsigned int var_2 = 3870517337U;
short var_4 = (short)-22909;
unsigned short var_7 = (unsigned short)22807;
unsigned int var_8 = 1183973541U;
unsigned int var_10 = 141432096U;
int zero = 0;
unsigned int var_12 = 3912237865U;
unsigned int var_13 = 60756543U;
unsigned short var_14 = (unsigned short)10265;
short var_15 = (short)-17386;
unsigned short var_16 = (unsigned short)1330;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
