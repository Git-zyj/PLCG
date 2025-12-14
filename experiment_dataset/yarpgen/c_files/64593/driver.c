#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8948107299339997077LL;
long long int var_2 = 6197092067625832775LL;
short var_3 = (short)-15655;
unsigned int var_4 = 3381794837U;
unsigned short var_7 = (unsigned short)38875;
long long int var_10 = -4542537700776789219LL;
unsigned char var_12 = (unsigned char)65;
_Bool var_13 = (_Bool)0;
int var_14 = -1295162901;
short var_17 = (short)638;
short var_18 = (short)-16010;
int zero = 0;
signed char var_19 = (signed char)95;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)46897;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)92;
unsigned int var_24 = 2156445552U;
unsigned long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 12811099581017188213ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
