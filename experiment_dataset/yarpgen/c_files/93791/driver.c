#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -597267347;
short var_3 = (short)575;
unsigned char var_4 = (unsigned char)144;
int var_5 = -663181500;
signed char var_6 = (signed char)12;
unsigned long long int var_12 = 6522585262937707793ULL;
int zero = 0;
short var_16 = (short)21446;
int var_17 = 437986942;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
