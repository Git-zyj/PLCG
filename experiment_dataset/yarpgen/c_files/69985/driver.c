#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11519305840452684987ULL;
long long int var_7 = -6176517466032103936LL;
int var_15 = -592726328;
int zero = 0;
long long int var_19 = 1101790864517899889LL;
long long int var_20 = 6243998964015237851LL;
long long int var_21 = -4759827554922320781LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
