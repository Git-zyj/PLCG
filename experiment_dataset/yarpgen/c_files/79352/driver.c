#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
long long int var_3 = -4612068952267534636LL;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)20;
int zero = 0;
unsigned int var_16 = 3185769536U;
unsigned int var_17 = 818694091U;
short var_18 = (short)-22642;
unsigned long long int var_19 = 15792645413279130362ULL;
short var_20 = (short)-3592;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
