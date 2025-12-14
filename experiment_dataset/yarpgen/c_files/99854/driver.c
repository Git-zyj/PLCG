#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
signed char var_5 = (signed char)-99;
_Bool var_6 = (_Bool)1;
unsigned char var_12 = (unsigned char)239;
int zero = 0;
unsigned long long int var_13 = 2782852240389791139ULL;
int var_14 = 1675211326;
unsigned int var_15 = 2627559362U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
