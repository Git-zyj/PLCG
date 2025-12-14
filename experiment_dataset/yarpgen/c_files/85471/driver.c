#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_7 = -6419491587162947008LL;
int var_15 = -805952625;
int zero = 0;
long long int var_16 = -5165103453973128323LL;
unsigned int var_17 = 3044668616U;
long long int var_18 = 1504836937032379415LL;
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
