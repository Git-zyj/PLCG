#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 90234498;
unsigned int var_2 = 1416730875U;
signed char var_5 = (signed char)115;
long long int var_6 = -8257991707309142044LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 9384280218844943580ULL;
unsigned long long int var_10 = 12429228259487375286ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)16874;
unsigned char var_12 = (unsigned char)52;
unsigned int var_13 = 3791879974U;
unsigned char var_14 = (unsigned char)86;
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
