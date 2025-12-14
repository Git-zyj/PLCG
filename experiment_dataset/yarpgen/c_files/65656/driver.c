#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6517361141282341842ULL;
long long int var_4 = -2057545087377320706LL;
short var_5 = (short)-1559;
long long int var_10 = 2144402222611006231LL;
short var_11 = (short)-22575;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7407329594067862908LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
