#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
unsigned int var_4 = 3094236301U;
short var_5 = (short)21775;
long long int var_7 = 1381368705171468613LL;
unsigned int var_11 = 4095130902U;
int zero = 0;
signed char var_15 = (signed char)93;
short var_16 = (short)-7241;
void init() {
}

void checksum() {
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
