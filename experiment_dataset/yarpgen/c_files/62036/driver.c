#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3897855553U;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-6286;
unsigned long long int var_7 = 2481355417933999128ULL;
unsigned long long int var_11 = 12730541407697707553ULL;
short var_12 = (short)16759;
int zero = 0;
unsigned long long int var_16 = 847508121445304782ULL;
long long int var_17 = -8375279451695288120LL;
unsigned long long int var_18 = 12707389656604041632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
