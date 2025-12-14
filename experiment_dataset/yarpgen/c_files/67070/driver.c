#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 94596583U;
unsigned long long int var_1 = 461222091409204827ULL;
short var_3 = (short)11424;
unsigned long long int var_6 = 15335187157108210928ULL;
unsigned long long int var_13 = 5231255791423210874ULL;
short var_14 = (short)27826;
int zero = 0;
unsigned long long int var_15 = 9160978259044905455ULL;
short var_16 = (short)-5496;
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
