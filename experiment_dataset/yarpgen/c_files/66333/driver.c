#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 17176555671783415757ULL;
unsigned int var_6 = 1643507295U;
signed char var_8 = (signed char)39;
unsigned int var_9 = 1533680088U;
unsigned char var_11 = (unsigned char)3;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4230796591U;
unsigned char var_14 = (unsigned char)80;
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
