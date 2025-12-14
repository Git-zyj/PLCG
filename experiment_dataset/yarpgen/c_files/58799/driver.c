#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15298327647299982040ULL;
unsigned long long int var_17 = 15484742408306414142ULL;
int zero = 0;
unsigned long long int var_18 = 18055695065630556473ULL;
unsigned long long int var_19 = 17407365986736147918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
