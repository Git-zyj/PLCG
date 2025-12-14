#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1496565172;
unsigned long long int var_2 = 6557796512361788093ULL;
long long int var_4 = 694009861870972217LL;
short var_7 = (short)-12947;
short var_8 = (short)-17113;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)44966;
int var_14 = 1769521633;
unsigned char var_15 = (unsigned char)21;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)46762;
_Bool var_21 = (_Bool)1;
int var_22 = -1926254777;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)252;
unsigned int var_26 = 3927266393U;
_Bool var_27 = (_Bool)1;
short var_28 = (short)18019;
long long int arr_0 [11] ;
short arr_1 [11] [11] ;
unsigned long long int arr_2 [11] [11] ;
short arr_4 [21] ;
unsigned short arr_5 [21] ;
unsigned char arr_7 [19] ;
short arr_8 [19] ;
short arr_11 [22] [22] ;
long long int arr_12 [22] ;
int arr_20 [21] ;
unsigned char arr_3 [11] ;
unsigned char arr_6 [21] ;
int arr_9 [19] [19] ;
unsigned short arr_10 [19] ;
unsigned char arr_13 [22] [22] ;
unsigned char arr_14 [22] [22] ;
short arr_18 [18] ;
unsigned long long int arr_19 [18] ;
_Bool arr_23 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -3145934694406810889LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)593;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 7794265339822054790ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-1071;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)1863;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)-4243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (short)18279;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -18466484463672085LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = 1495015120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -84784423;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)42080;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (short)-28415;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 1899381691467391891ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
