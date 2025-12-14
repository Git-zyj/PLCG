#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 5533165904971258877LL;
unsigned char var_6 = (unsigned char)166;
unsigned short var_10 = (unsigned short)34867;
unsigned int var_11 = 2818268101U;
unsigned long long int var_13 = 12240169500724564157ULL;
unsigned short var_14 = (unsigned short)260;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
unsigned int var_16 = 2535143286U;
short var_17 = (short)-12740;
unsigned short var_18 = (unsigned short)14709;
unsigned short var_19 = (unsigned short)57824;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
