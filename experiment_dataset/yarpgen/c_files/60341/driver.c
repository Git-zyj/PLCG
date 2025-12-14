#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1457442653U;
unsigned char var_1 = (unsigned char)213;
signed char var_2 = (signed char)23;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)122;
int zero = 0;
unsigned char var_11 = (unsigned char)73;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
