#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)33;
long long int var_12 = -550331596007664655LL;
signed char var_13 = (signed char)-81;
int zero = 0;
unsigned int var_15 = 2461223745U;
long long int var_16 = -2291990530314603754LL;
signed char var_17 = (signed char)-25;
unsigned char var_18 = (unsigned char)234;
unsigned int var_19 = 1819628407U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
