#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 392820887;
unsigned short var_1 = (unsigned short)42204;
unsigned char var_2 = (unsigned char)179;
_Bool var_3 = (_Bool)0;
long long int var_4 = -4203103907505292345LL;
unsigned int var_5 = 3006671144U;
unsigned char var_6 = (unsigned char)147;
unsigned short var_7 = (unsigned short)1405;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)46207;
unsigned char var_10 = (unsigned char)185;
long long int var_11 = -4574232494866664710LL;
unsigned char var_12 = (unsigned char)187;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1489698500;
long long int var_16 = 8114932881924809105LL;
void init() {
}

void checksum() {
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
