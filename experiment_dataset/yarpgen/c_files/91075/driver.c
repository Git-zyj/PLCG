#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned long long int var_2 = 3333573680165215799ULL;
unsigned int var_9 = 2262548230U;
int var_12 = 363850281;
unsigned int var_15 = 1923194231U;
int zero = 0;
short var_16 = (short)-14978;
signed char var_17 = (signed char)122;
void init() {
}

void checksum() {
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
