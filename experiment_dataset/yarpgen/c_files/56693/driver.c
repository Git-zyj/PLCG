#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned char var_7 = (unsigned char)112;
signed char var_8 = (signed char)95;
unsigned short var_10 = (unsigned short)35711;
signed char var_11 = (signed char)-121;
unsigned long long int var_12 = 1472724883837724998ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1176452976;
int var_15 = -791473760;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
