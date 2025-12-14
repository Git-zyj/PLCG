#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5372557461396282995ULL;
short var_10 = (short)23378;
unsigned long long int var_12 = 1778723315111785569ULL;
int zero = 0;
short var_13 = (short)-17524;
long long int var_14 = -4395259483719357911LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
