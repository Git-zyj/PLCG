#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1973827597U;
unsigned char var_2 = (unsigned char)235;
unsigned short var_3 = (unsigned short)25618;
unsigned long long int var_4 = 9054359697694903056ULL;
unsigned char var_7 = (unsigned char)54;
int zero = 0;
unsigned int var_13 = 2174664065U;
short var_14 = (short)19860;
unsigned short var_15 = (unsigned short)61769;
short var_16 = (short)19884;
void init() {
}

void checksum() {
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
