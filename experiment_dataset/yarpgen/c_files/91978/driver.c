#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 477740686U;
short var_3 = (short)3599;
unsigned char var_5 = (unsigned char)72;
unsigned char var_6 = (unsigned char)189;
short var_8 = (short)-28141;
int var_9 = 702227225;
int var_11 = 1844833689;
int zero = 0;
int var_14 = -347539484;
unsigned char var_15 = (unsigned char)236;
signed char var_16 = (signed char)76;
void init() {
}

void checksum() {
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
