#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_10 = 3349999337U;
unsigned long long int var_12 = 8409555440384468962ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)98;
long long int var_15 = 6325568305997884944LL;
signed char var_16 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
