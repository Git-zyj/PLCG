#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4271475342U;
long long int var_2 = 5558192589607654485LL;
unsigned char var_7 = (unsigned char)232;
long long int var_10 = 1452255701605044743LL;
int var_12 = -987722106;
int var_14 = -1437220543;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2216922852U;
int var_20 = -1037271031;
unsigned long long int var_21 = 11985951044322309673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
