#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
short var_2 = (short)-12597;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3924927303223405548LL;
unsigned long long int var_5 = 18244662419781313440ULL;
long long int var_6 = -4456353810367029752LL;
short var_7 = (short)-31189;
unsigned int var_8 = 4054586792U;
signed char var_10 = (signed char)115;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)8;
int zero = 0;
unsigned char var_16 = (unsigned char)97;
long long int var_17 = -8521102576625227922LL;
unsigned short var_18 = (unsigned short)46156;
short var_19 = (short)18510;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
