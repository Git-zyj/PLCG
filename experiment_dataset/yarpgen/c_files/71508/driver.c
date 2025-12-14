#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)3620;
long long int var_8 = 2358553852234692312LL;
int var_14 = -1492165863;
int zero = 0;
short var_15 = (short)-29531;
unsigned long long int var_16 = 8303313962992046168ULL;
unsigned short var_17 = (unsigned short)31036;
void init() {
}

void checksum() {
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
