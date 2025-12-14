#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41209;
unsigned long long int var_6 = 14628487317475711571ULL;
unsigned short var_7 = (unsigned short)51270;
unsigned short var_12 = (unsigned short)59434;
unsigned int var_14 = 1472719577U;
signed char var_16 = (signed char)-89;
int zero = 0;
short var_19 = (short)-22716;
int var_20 = 1692338768;
short var_21 = (short)8867;
short var_22 = (short)-7238;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
