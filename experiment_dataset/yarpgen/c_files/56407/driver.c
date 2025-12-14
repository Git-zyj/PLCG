#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 427220991;
unsigned int var_2 = 3663736567U;
signed char var_3 = (signed char)79;
unsigned long long int var_5 = 11090060402449694889ULL;
unsigned char var_6 = (unsigned char)165;
int zero = 0;
short var_12 = (short)19029;
unsigned char var_13 = (unsigned char)90;
int var_14 = -1678134149;
short var_15 = (short)-21866;
unsigned char var_16 = (unsigned char)132;
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
