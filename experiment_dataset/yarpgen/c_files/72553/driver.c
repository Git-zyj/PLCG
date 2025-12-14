#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30578;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_7 = -6717603306114788223LL;
short var_10 = (short)-20279;
int zero = 0;
short var_17 = (short)-14687;
short var_18 = (short)-14481;
unsigned short var_19 = (unsigned short)23334;
signed char var_20 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
