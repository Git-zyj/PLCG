#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)28283;
signed char var_3 = (signed char)50;
unsigned int var_5 = 3942176064U;
short var_6 = (short)-6556;
signed char var_7 = (signed char)101;
short var_9 = (short)24027;
unsigned short var_11 = (unsigned short)65461;
unsigned long long int var_12 = 3953548068591591874ULL;
int zero = 0;
long long int var_13 = -771281624440018533LL;
unsigned int var_14 = 3618205391U;
short var_15 = (short)11862;
unsigned long long int var_16 = 10036336469663976190ULL;
unsigned char var_17 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
