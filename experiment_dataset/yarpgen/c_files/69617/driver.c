#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)84;
unsigned int var_4 = 1392261721U;
unsigned long long int var_5 = 2088418498275576125ULL;
int zero = 0;
short var_17 = (short)9005;
unsigned int var_18 = 3303038785U;
short var_19 = (short)10462;
unsigned int var_20 = 1654937242U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
