#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3034232863U;
unsigned short var_2 = (unsigned short)28826;
unsigned int var_4 = 3178412326U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 8873664499048806908ULL;
unsigned int var_9 = 3917570925U;
signed char var_10 = (signed char)52;
int zero = 0;
short var_11 = (short)8762;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-23605;
_Bool var_14 = (_Bool)1;
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
