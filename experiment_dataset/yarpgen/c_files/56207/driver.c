#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 609046873U;
unsigned long long int var_6 = 2388471195989052542ULL;
unsigned short var_10 = (unsigned short)11734;
short var_11 = (short)-2070;
short var_14 = (short)-1739;
int zero = 0;
int var_15 = -1165103675;
short var_16 = (short)11588;
short var_17 = (short)-14068;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
