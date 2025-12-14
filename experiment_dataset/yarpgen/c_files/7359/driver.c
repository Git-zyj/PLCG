#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3164352255337184446LL;
long long int var_2 = -8959306715149225120LL;
unsigned long long int var_4 = 1756714149449409672ULL;
long long int var_5 = -4177893975020314705LL;
int zero = 0;
signed char var_10 = (signed char)87;
signed char var_11 = (signed char)88;
long long int var_12 = -7189439244187731436LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
