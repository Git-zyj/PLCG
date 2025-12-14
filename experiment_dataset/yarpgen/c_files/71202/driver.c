#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)230;
long long int var_3 = -4577398468781120895LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6642661340673559422LL;
int var_7 = -1170158571;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)12527;
int zero = 0;
unsigned short var_13 = (unsigned short)36280;
unsigned char var_14 = (unsigned char)50;
unsigned short var_15 = (unsigned short)31095;
short var_16 = (short)20994;
short var_17 = (short)14509;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
