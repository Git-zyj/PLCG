#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52510;
unsigned int var_4 = 2831312723U;
unsigned int var_6 = 1490820182U;
unsigned int var_7 = 2047204380U;
signed char var_14 = (signed char)21;
int zero = 0;
unsigned int var_16 = 1673128165U;
unsigned int var_17 = 1862014566U;
void init() {
}

void checksum() {
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
