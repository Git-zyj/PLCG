#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
int var_2 = -1428276694;
unsigned long long int var_3 = 11204505876134273003ULL;
unsigned long long int var_5 = 10617465344330108830ULL;
int var_6 = -333401130;
long long int var_8 = -7593674344884451667LL;
signed char var_9 = (signed char)-42;
short var_11 = (short)-12769;
short var_12 = (short)8844;
_Bool var_14 = (_Bool)1;
int var_16 = -2016280476;
int zero = 0;
short var_17 = (short)3230;
short var_18 = (short)-28804;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
