#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1699274535;
unsigned long long int var_2 = 10540649302446959330ULL;
int var_3 = -1591102006;
unsigned long long int var_6 = 18044537259415520998ULL;
_Bool var_10 = (_Bool)1;
int var_12 = -905257361;
int zero = 0;
unsigned long long int var_13 = 3449410513766221055ULL;
signed char var_14 = (signed char)-71;
signed char var_15 = (signed char)-125;
long long int var_16 = -1186577037030198131LL;
unsigned long long int var_17 = 13983365159495690089ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
