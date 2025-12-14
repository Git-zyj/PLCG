#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11380;
signed char var_2 = (signed char)(-127 - 1);
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)7840;
unsigned short var_11 = (unsigned short)51652;
long long int var_12 = 9184260899311018343LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
