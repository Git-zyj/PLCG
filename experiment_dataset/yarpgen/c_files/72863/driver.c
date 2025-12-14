#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 6322988501334306493LL;
unsigned int var_8 = 2455276771U;
short var_11 = (short)12331;
int zero = 0;
long long int var_15 = -7035119404862040749LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
