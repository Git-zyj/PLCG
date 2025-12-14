#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned char var_1 = (unsigned char)151;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)52;
unsigned char var_6 = (unsigned char)119;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)1;
int var_10 = 928412378;
unsigned short var_12 = (unsigned short)42449;
unsigned char var_13 = (unsigned char)157;
unsigned short var_14 = (unsigned short)34834;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 2082265151;
unsigned int var_18 = 520398860U;
unsigned int var_19 = 3421539460U;
unsigned int var_20 = 2887950115U;
unsigned char var_21 = (unsigned char)126;
unsigned int var_22 = 1713216601U;
unsigned short var_23 = (unsigned short)50987;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
int arr_0 [22] [22] ;
_Bool arr_1 [22] ;
_Bool arr_2 [22] [22] ;
unsigned char arr_4 [21] [21] ;
unsigned char arr_5 [21] [21] ;
unsigned char arr_6 [21] ;
unsigned short arr_12 [21] [21] ;
unsigned int arr_13 [21] [21] [21] ;
unsigned char arr_16 [16] ;
_Bool arr_21 [22] ;
unsigned char arr_22 [22] ;
_Bool arr_3 [22] ;
int arr_7 [21] ;
unsigned short arr_8 [21] ;
unsigned char arr_9 [21] ;
unsigned short arr_10 [21] ;
unsigned char arr_15 [21] [21] [21] ;
unsigned char arr_18 [16] ;
_Bool arr_19 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1031384502;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)36363;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1599928817U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 421727386;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)54664;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)1334;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
