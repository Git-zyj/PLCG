#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
int var_1 = 1680936552;
unsigned short var_4 = (unsigned short)58069;
signed char var_5 = (signed char)-16;
long long int var_6 = -5881365251864382868LL;
unsigned int var_8 = 290112883U;
signed char var_12 = (signed char)(-127 - 1);
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 4836004729749635757LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)82;
unsigned int var_17 = 2650898598U;
void init() {
}

void checksum() {
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
