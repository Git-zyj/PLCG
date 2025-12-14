#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13765;
long long int var_2 = -4524385706837913844LL;
long long int var_3 = -4529792712507685034LL;
long long int var_6 = 8027371162930369907LL;
signed char var_9 = (signed char)64;
int zero = 0;
short var_10 = (short)30951;
short var_11 = (short)-8689;
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
