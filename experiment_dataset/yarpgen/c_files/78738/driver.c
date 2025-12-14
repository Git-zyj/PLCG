#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1251269779U;
unsigned char var_5 = (unsigned char)181;
unsigned char var_7 = (unsigned char)205;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)236;
unsigned long long int var_12 = 5417592374441254524ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2751176434U;
unsigned char var_16 = (unsigned char)200;
unsigned long long int var_17 = 6668864681348512646ULL;
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
