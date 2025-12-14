#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7836831378582262461ULL;
long long int var_7 = 5510238357392031728LL;
int var_10 = 347186075;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)166;
int zero = 0;
signed char var_15 = (signed char)44;
signed char var_16 = (signed char)-126;
signed char var_17 = (signed char)-16;
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
