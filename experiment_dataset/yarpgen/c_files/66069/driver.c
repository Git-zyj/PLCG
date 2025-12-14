#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 392647199059482262ULL;
signed char var_12 = (signed char)86;
int zero = 0;
short var_13 = (short)4329;
signed char var_14 = (signed char)35;
int var_15 = 2124989651;
_Bool var_16 = (_Bool)1;
short var_17 = (short)23546;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
