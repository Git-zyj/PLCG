#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 541624453U;
unsigned int var_3 = 3600927149U;
long long int var_6 = -8624830429388483576LL;
int zero = 0;
unsigned int var_12 = 3065712809U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1383389564U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
