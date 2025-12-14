#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
long long int var_1 = 8820468237119488201LL;
unsigned short var_2 = (unsigned short)55119;
short var_4 = (short)29879;
_Bool var_5 = (_Bool)1;
long long int var_6 = -7640582237637770432LL;
int var_7 = 882828378;
unsigned int var_8 = 2842218960U;
unsigned short var_9 = (unsigned short)32448;
int zero = 0;
unsigned int var_10 = 3056611043U;
unsigned long long int var_11 = 361506207368781350ULL;
signed char var_12 = (signed char)57;
unsigned char var_13 = (unsigned char)39;
short var_14 = (short)-24368;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
