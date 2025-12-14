#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 931668221;
int var_6 = 1587433877;
long long int var_12 = 140655917061247861LL;
signed char var_15 = (signed char)7;
int zero = 0;
unsigned short var_17 = (unsigned short)28821;
long long int var_18 = -5464651811187586078LL;
long long int var_19 = 7685870853189634626LL;
_Bool var_20 = (_Bool)0;
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
