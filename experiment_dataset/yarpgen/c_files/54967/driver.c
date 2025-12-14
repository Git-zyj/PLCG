#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2330;
long long int var_3 = 2298383710592737744LL;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)53122;
int var_12 = 2047196533;
unsigned short var_13 = (unsigned short)30124;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
