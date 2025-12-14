#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18414;
unsigned long long int var_5 = 16258147581384673727ULL;
_Bool var_12 = (_Bool)1;
long long int var_14 = 3988155929089913393LL;
int zero = 0;
unsigned short var_16 = (unsigned short)53002;
unsigned int var_17 = 2147855821U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
