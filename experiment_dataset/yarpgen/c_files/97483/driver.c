#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned int var_1 = 3776821368U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 14162528400970883875ULL;
int zero = 0;
unsigned int var_10 = 998887061U;
unsigned short var_11 = (unsigned short)48187;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
