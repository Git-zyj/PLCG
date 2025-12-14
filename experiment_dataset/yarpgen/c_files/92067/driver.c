#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63849;
unsigned int var_8 = 2197535669U;
signed char var_10 = (signed char)78;
signed char var_11 = (signed char)23;
unsigned short var_12 = (unsigned short)6794;
unsigned int var_13 = 924049067U;
unsigned long long int var_16 = 2616013781225384417ULL;
unsigned int var_17 = 621331753U;
unsigned char var_18 = (unsigned char)246;
int zero = 0;
unsigned long long int var_20 = 1613972450132044045ULL;
unsigned short var_21 = (unsigned short)52388;
unsigned long long int var_22 = 476209092764582674ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
