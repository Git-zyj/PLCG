#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4707528121327429368LL;
signed char var_1 = (signed char)-76;
short var_8 = (short)338;
short var_13 = (short)-22700;
long long int var_14 = -6128998565619359313LL;
signed char var_17 = (signed char)-66;
signed char var_18 = (signed char)-61;
int zero = 0;
short var_20 = (short)-12779;
signed char var_21 = (signed char)-82;
int var_22 = 1238530010;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
