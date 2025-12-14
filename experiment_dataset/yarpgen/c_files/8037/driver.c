#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8193;
long long int var_4 = 8229188565068288022LL;
short var_7 = (short)1710;
short var_9 = (short)24401;
int var_14 = 192031312;
unsigned long long int var_16 = 8130692100012216659ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)190;
unsigned int var_20 = 1197019834U;
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
