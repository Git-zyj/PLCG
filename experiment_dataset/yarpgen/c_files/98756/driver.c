#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1467440224U;
short var_4 = (short)-30357;
short var_6 = (short)32697;
short var_12 = (short)-17476;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 11520170911809283092ULL;
void init() {
}

void checksum() {
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
