#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)32019;
unsigned int var_6 = 1971841532U;
unsigned char var_8 = (unsigned char)13;
unsigned int var_10 = 3278398233U;
unsigned long long int var_11 = 2923975698729460619ULL;
unsigned int var_12 = 2209533595U;
unsigned char var_18 = (unsigned char)119;
int zero = 0;
unsigned short var_19 = (unsigned short)45030;
unsigned int var_20 = 723365256U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
