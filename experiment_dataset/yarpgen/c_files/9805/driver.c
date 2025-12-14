#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)77;
unsigned int var_4 = 75350200U;
long long int var_7 = 960557941463762078LL;
unsigned short var_8 = (unsigned short)19286;
unsigned char var_13 = (unsigned char)9;
int zero = 0;
unsigned int var_14 = 3943394989U;
unsigned char var_15 = (unsigned char)141;
short var_16 = (short)-7189;
void init() {
}

void checksum() {
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
