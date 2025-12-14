#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
signed char var_2 = (signed char)51;
signed char var_4 = (signed char)97;
int var_8 = 1559219951;
int var_10 = -18806841;
int zero = 0;
unsigned short var_14 = (unsigned short)5074;
unsigned long long int var_15 = 17575998019474688136ULL;
unsigned int var_16 = 247452935U;
unsigned short var_17 = (unsigned short)48443;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
