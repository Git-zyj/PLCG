#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1479036196;
_Bool var_2 = (_Bool)1;
long long int var_4 = -1926792936019680407LL;
short var_6 = (short)28434;
_Bool var_8 = (_Bool)0;
long long int var_11 = -4898256674679214422LL;
int zero = 0;
int var_19 = 560545479;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
