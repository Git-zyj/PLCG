#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)17670;
unsigned int var_7 = 3323699496U;
int var_8 = -1631844888;
unsigned char var_10 = (unsigned char)141;
unsigned char var_12 = (unsigned char)219;
unsigned int var_13 = 1535186211U;
int zero = 0;
short var_17 = (short)-7313;
unsigned int var_18 = 3053024593U;
unsigned char var_19 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
