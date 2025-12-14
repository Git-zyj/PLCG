#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 988119651U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)1756;
signed char var_3 = (signed char)45;
unsigned int var_4 = 1379712324U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2611612168U;
signed char var_8 = (signed char)13;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1731174635U;
unsigned int var_12 = 1752064077U;
long long int var_13 = 2576299870025405547LL;
unsigned int var_14 = 3944870514U;
long long int var_15 = 8241212807467042764LL;
long long int var_16 = -1151753611002126294LL;
short var_17 = (short)-2628;
unsigned int var_18 = 260768541U;
signed char var_19 = (signed char)56;
signed char var_20 = (signed char)-9;
unsigned long long int var_21 = 4789149598992165317ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)32;
unsigned char var_24 = (unsigned char)21;
signed char var_25 = (signed char)-98;
_Bool arr_2 [21] ;
_Bool arr_5 [21] [21] [21] ;
long long int arr_6 [21] [21] ;
_Bool arr_7 [21] [21] [21] ;
unsigned int arr_9 [21] [21] ;
_Bool arr_10 [21] [21] ;
short arr_13 [21] [21] [21] ;
unsigned char arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 8297266854217413223LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 3608348718U : 1151464277U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)32418;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)220 : (unsigned char)182;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
