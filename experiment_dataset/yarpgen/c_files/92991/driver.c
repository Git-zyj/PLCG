#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3195706015U;
unsigned long long int var_9 = 4017754678300461755ULL;
int zero = 0;
unsigned long long int var_13 = 8303957759851905347ULL;
long long int var_14 = 3006378336717505172LL;
int var_15 = -922896717;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
