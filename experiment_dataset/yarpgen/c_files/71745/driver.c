#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 24817313;
signed char var_7 = (signed char)100;
unsigned long long int var_10 = 13869039493353468198ULL;
int zero = 0;
long long int var_14 = -6838772558657982712LL;
short var_15 = (short)-32202;
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
