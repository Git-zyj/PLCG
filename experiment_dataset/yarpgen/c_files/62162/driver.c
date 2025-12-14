#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned int var_9 = 1139894059U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_13 = 8435005304060497187LL;
unsigned long long int var_14 = 16028441778311593515ULL;
int var_15 = 166014901;
unsigned long long int var_16 = 3107940689686340576ULL;
void init() {
}

void checksum() {
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
