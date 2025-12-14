#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6299073469487724564ULL;
signed char var_3 = (signed char)50;
int var_10 = -266965771;
int zero = 0;
int var_13 = 2119074575;
unsigned int var_14 = 1770909288U;
long long int var_15 = 8081612905486915732LL;
short var_16 = (short)-30854;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
