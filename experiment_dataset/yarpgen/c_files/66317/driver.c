#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned char var_2 = (unsigned char)248;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1800929449U;
unsigned int var_9 = 268925618U;
long long int var_10 = 7103310625436375465LL;
unsigned long long int var_12 = 15635484124724589345ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2806343250U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8248960276172039846ULL;
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
