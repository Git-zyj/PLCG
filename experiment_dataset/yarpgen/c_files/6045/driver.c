#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 616416109U;
unsigned int var_3 = 2386807205U;
unsigned int var_15 = 618796485U;
unsigned int var_17 = 896200026U;
unsigned int var_18 = 3502643181U;
int zero = 0;
unsigned int var_20 = 4198641942U;
unsigned int var_21 = 1678197568U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
