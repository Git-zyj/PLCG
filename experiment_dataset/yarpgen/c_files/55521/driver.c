#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1683917840;
unsigned int var_3 = 900524761U;
short var_4 = (short)31214;
long long int var_5 = 8905489250946358956LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)24617;
unsigned int var_11 = 4095862594U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
