#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22196;
short var_2 = (short)22984;
unsigned long long int var_6 = 7599602417399839603ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2005022460576336779ULL;
unsigned char var_14 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
