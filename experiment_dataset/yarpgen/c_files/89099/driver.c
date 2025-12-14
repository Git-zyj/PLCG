#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1578247366;
short var_8 = (short)-17387;
unsigned int var_10 = 1182065231U;
short var_12 = (short)4231;
short var_13 = (short)5053;
int zero = 0;
int var_15 = 2085848085;
int var_16 = 55208711;
void init() {
}

void checksum() {
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
