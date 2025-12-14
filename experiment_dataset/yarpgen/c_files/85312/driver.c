#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)31;
short var_11 = (short)-22280;
long long int var_13 = 3525969284711298347LL;
int zero = 0;
signed char var_16 = (signed char)122;
int var_17 = -249389413;
long long int var_18 = 1758914240792489998LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
