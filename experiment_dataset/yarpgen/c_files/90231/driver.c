#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 3712501633535657823ULL;
unsigned long long int var_9 = 11859253679074460287ULL;
unsigned short var_10 = (unsigned short)1613;
int zero = 0;
unsigned short var_11 = (unsigned short)20559;
unsigned int var_12 = 1916747841U;
short var_13 = (short)9933;
unsigned short var_14 = (unsigned short)4569;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
