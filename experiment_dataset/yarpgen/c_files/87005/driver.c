#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2291285086U;
unsigned short var_4 = (unsigned short)59605;
unsigned int var_5 = 3494098195U;
unsigned short var_7 = (unsigned short)41695;
unsigned short var_11 = (unsigned short)45818;
long long int var_12 = -4181898045523675250LL;
int zero = 0;
unsigned short var_15 = (unsigned short)11002;
unsigned int var_16 = 2555940427U;
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
