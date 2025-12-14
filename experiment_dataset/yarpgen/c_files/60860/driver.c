#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)11923;
long long int var_18 = 2840256158369528782LL;
int zero = 0;
unsigned long long int var_20 = 18126535435412420478ULL;
signed char var_21 = (signed char)12;
unsigned long long int var_22 = 12568113340496580728ULL;
int var_23 = -166022154;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
