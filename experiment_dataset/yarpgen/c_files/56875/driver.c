#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9722;
unsigned int var_2 = 1372123537U;
short var_3 = (short)17305;
unsigned int var_5 = 2920196017U;
signed char var_6 = (signed char)-123;
long long int var_12 = 7903704782072893722LL;
short var_14 = (short)12561;
int zero = 0;
unsigned long long int var_19 = 7178895741871375527ULL;
short var_20 = (short)-22916;
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
