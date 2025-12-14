#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20635;
short var_4 = (short)-2601;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1457623282U;
unsigned int var_9 = 620264493U;
unsigned long long int var_11 = 10463803152354699060ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-68;
long long int var_14 = -6327039395130183017LL;
int zero = 0;
long long int var_15 = -3175125544181689208LL;
short var_16 = (short)-22896;
long long int var_17 = -4929965355908367909LL;
void init() {
}

void checksum() {
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
