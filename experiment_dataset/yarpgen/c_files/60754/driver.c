#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)99;
_Bool var_11 = (_Bool)1;
unsigned int var_17 = 3732995667U;
int zero = 0;
unsigned int var_20 = 1462883762U;
int var_21 = -2051373728;
unsigned char var_22 = (unsigned char)120;
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
