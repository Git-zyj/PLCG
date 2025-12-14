#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2065824133U;
unsigned int var_7 = 3363130275U;
unsigned int var_14 = 2128797104U;
int zero = 0;
unsigned long long int var_15 = 10965090383868379324ULL;
short var_16 = (short)-17792;
unsigned short var_17 = (unsigned short)39946;
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
