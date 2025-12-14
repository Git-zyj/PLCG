#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2956;
short var_3 = (short)5072;
unsigned char var_11 = (unsigned char)79;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)34;
unsigned int var_20 = 707351499U;
unsigned long long int var_21 = 8647560418762175866ULL;
unsigned char var_22 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
