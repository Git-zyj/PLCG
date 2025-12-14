#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1016724430;
unsigned long long int var_4 = 929039280174245576ULL;
int var_5 = -780961435;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15534597255883682485ULL;
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
