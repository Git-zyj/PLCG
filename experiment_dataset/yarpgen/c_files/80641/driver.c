#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)39510;
unsigned int var_8 = 659880660U;
unsigned int var_10 = 2231975437U;
long long int var_11 = 3897697761600525261LL;
unsigned int var_14 = 3230154419U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1331916643U;
void init() {
}

void checksum() {
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
