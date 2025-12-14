#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1562387463U;
long long int var_10 = -7981746938238577688LL;
signed char var_11 = (signed char)3;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
int var_13 = 2144701483;
int var_14 = -270852872;
unsigned int var_15 = 18106681U;
unsigned char var_16 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
