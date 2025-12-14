#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11148861660050850080ULL;
unsigned long long int var_4 = 7509387475256722988ULL;
signed char var_13 = (signed char)103;
int zero = 0;
unsigned int var_15 = 1765687004U;
unsigned long long int var_16 = 16099614618737182110ULL;
unsigned long long int var_17 = 16432967722029635792ULL;
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
