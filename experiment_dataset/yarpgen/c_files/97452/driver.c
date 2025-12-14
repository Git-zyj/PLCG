#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16530975807957320501ULL;
int var_3 = 1145142603;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1729864496U;
short var_10 = (short)10372;
int zero = 0;
short var_15 = (short)-14178;
int var_16 = 2092923548;
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
