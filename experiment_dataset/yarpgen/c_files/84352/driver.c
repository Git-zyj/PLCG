#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)14892;
long long int var_6 = -5134812149776035880LL;
short var_7 = (short)22056;
unsigned short var_11 = (unsigned short)63528;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7363171604901977663ULL;
unsigned int var_18 = 1893768667U;
int zero = 0;
long long int var_19 = -7069157493043430210LL;
unsigned int var_20 = 2436366070U;
short var_21 = (short)-28041;
void init() {
}

void checksum() {
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
