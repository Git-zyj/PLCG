#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 446402443U;
unsigned long long int var_10 = 11719104745933323735ULL;
int var_11 = 800457285;
int zero = 0;
unsigned long long int var_14 = 8137977457598263554ULL;
unsigned int var_15 = 1663439661U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
