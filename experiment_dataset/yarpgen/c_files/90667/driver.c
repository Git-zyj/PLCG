#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-22;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2797710391805051925LL;
int zero = 0;
int var_16 = -38094344;
int var_17 = -1188910976;
short var_18 = (short)27318;
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
