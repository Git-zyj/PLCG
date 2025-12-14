#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 365975596;
unsigned short var_4 = (unsigned short)25100;
short var_5 = (short)-12197;
int var_6 = 1251049887;
short var_8 = (short)28686;
unsigned long long int var_9 = 8839174758540404736ULL;
int zero = 0;
unsigned int var_12 = 681493612U;
unsigned long long int var_13 = 4704801309511918155ULL;
signed char var_14 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
