#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1754669024;
int var_3 = 1198477178;
unsigned int var_5 = 4029867588U;
unsigned int var_7 = 4182823198U;
unsigned long long int var_10 = 16801197166363465230ULL;
short var_12 = (short)15418;
unsigned int var_15 = 1567829215U;
int zero = 0;
unsigned short var_16 = (unsigned short)57205;
unsigned int var_17 = 3350086672U;
unsigned int var_18 = 2855429982U;
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
