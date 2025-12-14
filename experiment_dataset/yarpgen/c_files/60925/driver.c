#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3467363441U;
signed char var_3 = (signed char)-107;
long long int var_4 = -7893784944318109755LL;
unsigned char var_5 = (unsigned char)55;
signed char var_6 = (signed char)-36;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6775206290036930568ULL;
int zero = 0;
signed char var_14 = (signed char)33;
int var_15 = -670833686;
signed char var_16 = (signed char)61;
signed char var_17 = (signed char)6;
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
