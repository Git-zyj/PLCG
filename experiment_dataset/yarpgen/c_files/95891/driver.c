#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19618;
long long int var_2 = -5593611695756974325LL;
_Bool var_3 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-15670;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = -2119094786;
unsigned int var_16 = 1298748474U;
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
