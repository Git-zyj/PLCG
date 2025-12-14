#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1193084442U;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)114;
short var_16 = (short)-32516;
unsigned long long int var_17 = 5701014912528298490ULL;
int zero = 0;
int var_18 = -1674363086;
long long int var_19 = -7758156254501135986LL;
signed char var_20 = (signed char)-16;
unsigned long long int var_21 = 1115663913687723045ULL;
unsigned char var_22 = (unsigned char)2;
unsigned int var_23 = 1990090599U;
unsigned long long int var_24 = 15750081410112796063ULL;
signed char var_25 = (signed char)-71;
signed char var_26 = (signed char)-100;
unsigned int var_27 = 3137164262U;
unsigned char var_28 = (unsigned char)144;
int var_29 = 1626290001;
unsigned char arr_1 [19] [19] ;
unsigned char arr_3 [19] [19] [19] ;
unsigned short arr_4 [19] ;
short arr_6 [21] ;
short arr_10 [21] [21] ;
unsigned long long int arr_11 [21] ;
long long int arr_14 [21] [21] [21] ;
unsigned short arr_17 [21] ;
unsigned short arr_21 [24] ;
short arr_19 [21] [21] [21] ;
unsigned short arr_30 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)12077;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-5865;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (short)11216;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 16147869319441621808ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 642902353689938431LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60712 : (unsigned short)52162;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (unsigned short)46097;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)10071;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50383 : (unsigned short)24040;
}

void checksum() {
    hash(&seed, var_18);
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
