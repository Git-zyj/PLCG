#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29290;
unsigned long long int var_6 = 6528010281715840057ULL;
unsigned long long int var_7 = 8585029299467486921ULL;
long long int var_8 = 3458020158088884099LL;
int zero = 0;
int var_11 = -328730596;
unsigned int var_12 = 2488440524U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
