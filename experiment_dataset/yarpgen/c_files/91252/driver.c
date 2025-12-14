#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned long long int var_3 = 5168236349939481786ULL;
long long int var_7 = 1260092733991672013LL;
int zero = 0;
short var_15 = (short)-17960;
signed char var_16 = (signed char)17;
unsigned int var_17 = 2044929756U;
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
