#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -5291780471201787427LL;
int var_8 = -1107103346;
unsigned long long int var_10 = 10965211730026126268ULL;
unsigned int var_16 = 3707451960U;
int zero = 0;
unsigned int var_17 = 32857169U;
unsigned int var_18 = 1050707393U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
