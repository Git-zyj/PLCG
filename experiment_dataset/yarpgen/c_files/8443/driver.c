#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)45264;
unsigned long long int var_5 = 13804157761622411391ULL;
unsigned int var_7 = 942490075U;
unsigned short var_8 = (unsigned short)2079;
signed char var_9 = (signed char)-126;
short var_10 = (short)24030;
signed char var_11 = (signed char)119;
unsigned short var_12 = (unsigned short)48834;
unsigned short var_13 = (unsigned short)22330;
unsigned long long int var_14 = 12924868944902493921ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)43776;
short var_16 = (short)30045;
long long int var_17 = 8616680311862113243LL;
unsigned int var_18 = 1527176952U;
unsigned char var_19 = (unsigned char)222;
unsigned short var_20 = (unsigned short)26298;
unsigned int var_21 = 3101669099U;
signed char var_22 = (signed char)-3;
long long int var_23 = -371018088957228198LL;
_Bool arr_2 [24] ;
unsigned char arr_8 [19] ;
int arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = -1661143686;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
