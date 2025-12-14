#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9033536188763806017ULL;
int var_8 = -1858356729;
unsigned short var_12 = (unsigned short)8724;
unsigned char var_13 = (unsigned char)126;
unsigned long long int var_15 = 18102629605169723984ULL;
int var_16 = 1764634133;
short var_17 = (short)12739;
int zero = 0;
unsigned int var_18 = 1284314096U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)7604;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
