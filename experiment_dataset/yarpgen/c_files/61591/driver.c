#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26374;
int var_5 = -1901735422;
long long int var_8 = 2545231240326137800LL;
unsigned int var_10 = 734435631U;
int var_11 = 1595872263;
signed char var_12 = (signed char)45;
int var_14 = 2052667518;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned char var_16 = (unsigned char)175;
void init() {
}

void checksum() {
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
