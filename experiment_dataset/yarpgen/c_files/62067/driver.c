#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)148;
unsigned char var_5 = (unsigned char)221;
unsigned int var_6 = 2290297732U;
_Bool var_7 = (_Bool)0;
int var_8 = 683956367;
signed char var_9 = (signed char)70;
long long int var_10 = 5486745988903175205LL;
unsigned long long int var_11 = 10683392150521025646ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -814310837;
int zero = 0;
int var_14 = -823319185;
int var_15 = 387480481;
unsigned char var_16 = (unsigned char)239;
unsigned short var_17 = (unsigned short)36405;
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
