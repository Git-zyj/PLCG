#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1215161135U;
short var_5 = (short)-18356;
unsigned int var_6 = 1141891922U;
long long int var_9 = 2345598512023889662LL;
signed char var_12 = (signed char)15;
unsigned int var_13 = 953842579U;
long long int var_14 = 94963943427137546LL;
int zero = 0;
long long int var_15 = 7401490054885842188LL;
unsigned long long int var_16 = 8706280161185345885ULL;
short var_17 = (short)-22988;
short var_18 = (short)-9887;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
