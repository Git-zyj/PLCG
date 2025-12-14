#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
signed char var_3 = (signed char)(-127 - 1);
unsigned char var_7 = (unsigned char)198;
long long int var_9 = 592358228089264735LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 145635885671939821LL;
_Bool var_12 = (_Bool)0;
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
