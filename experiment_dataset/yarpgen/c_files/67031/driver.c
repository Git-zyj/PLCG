#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1704028318U;
unsigned int var_2 = 512050008U;
unsigned int var_3 = 2059729872U;
signed char var_4 = (signed char)55;
unsigned short var_5 = (unsigned short)48767;
unsigned long long int var_6 = 12435359503317388116ULL;
long long int var_10 = 443670543394432260LL;
unsigned short var_12 = (unsigned short)57703;
int zero = 0;
signed char var_15 = (signed char)-113;
unsigned short var_16 = (unsigned short)43288;
unsigned short var_17 = (unsigned short)37406;
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
