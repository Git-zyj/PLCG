#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4173216607U;
unsigned long long int var_1 = 18186141606929712424ULL;
int zero = 0;
unsigned long long int var_16 = 1795365006320636687ULL;
unsigned char var_17 = (unsigned char)201;
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
