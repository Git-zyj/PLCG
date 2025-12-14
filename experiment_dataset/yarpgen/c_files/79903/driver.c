#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -589997341;
unsigned long long int var_12 = 7100256842674327661ULL;
int zero = 0;
unsigned long long int var_16 = 6232080537224580094ULL;
unsigned long long int var_17 = 11879558550253684183ULL;
unsigned long long int var_18 = 18303597449412899537ULL;
void init() {
}

void checksum() {
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
