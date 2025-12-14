#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)25218;
unsigned char var_5 = (unsigned char)15;
unsigned short var_6 = (unsigned short)12495;
short var_8 = (short)27090;
long long int var_9 = 2475989207562669093LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)46471;
short var_12 = (short)28562;
unsigned int var_13 = 3348800028U;
int zero = 0;
unsigned long long int var_14 = 1378646753136342764ULL;
unsigned char var_15 = (unsigned char)173;
unsigned long long int var_16 = 16325089236108763774ULL;
int var_17 = -2008026626;
_Bool var_18 = (_Bool)1;
int var_19 = -2124276749;
unsigned short var_20 = (unsigned short)28245;
unsigned short var_21 = (unsigned short)22869;
int var_22 = 1834067853;
signed char var_23 = (signed char)5;
unsigned int var_24 = 2174303329U;
long long int var_25 = 4930713167420519921LL;
long long int var_26 = 2252973153111500314LL;
unsigned long long int arr_0 [18] [18] ;
signed char arr_1 [18] [18] ;
int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
short arr_9 [10] [10] ;
_Bool arr_15 [23] [23] ;
short arr_16 [13] [13] ;
unsigned char arr_21 [13] [13] [13] ;
int arr_24 [13] [13] [13] ;
int arr_2 [18] ;
unsigned short arr_5 [18] ;
unsigned char arr_13 [10] ;
unsigned short arr_26 [13] [13] [13] ;
unsigned char arr_27 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 15237733300474117143ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -967164796;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 17567005934471835896ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-2097;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-2088;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 253479883;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2010168507 : 792301514;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)3941;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)19082;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (unsigned char)68;
}

void checksum() {
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
