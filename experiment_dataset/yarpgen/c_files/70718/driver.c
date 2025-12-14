#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32444;
short var_5 = (short)-25670;
long long int var_8 = 1658451568654578554LL;
unsigned int var_10 = 3009593350U;
short var_12 = (short)22214;
unsigned int var_13 = 1428738623U;
int zero = 0;
unsigned short var_14 = (unsigned short)57185;
unsigned int var_15 = 3984458389U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
