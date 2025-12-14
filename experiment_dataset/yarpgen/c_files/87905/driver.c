#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3574173173816574246LL;
int var_2 = 278621913;
int var_7 = -2085335541;
long long int var_9 = -7620790178892456377LL;
int zero = 0;
unsigned int var_11 = 808636773U;
long long int var_12 = -4954086752625509883LL;
unsigned short var_13 = (unsigned short)8493;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
