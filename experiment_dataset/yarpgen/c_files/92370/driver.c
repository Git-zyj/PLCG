#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 447006612;
unsigned short var_7 = (unsigned short)33764;
unsigned int var_8 = 3043660156U;
unsigned short var_10 = (unsigned short)30768;
short var_11 = (short)16470;
int zero = 0;
unsigned int var_12 = 904668986U;
unsigned int var_13 = 2470707804U;
signed char var_14 = (signed char)78;
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
