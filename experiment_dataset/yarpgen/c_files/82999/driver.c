#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -553684318;
unsigned short var_2 = (unsigned short)18945;
short var_3 = (short)1776;
int var_4 = 729913078;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 10145970630552116954ULL;
unsigned long long int var_11 = 7516624403817726556ULL;
unsigned long long int var_13 = 11859282029602086922ULL;
unsigned long long int var_15 = 2676614663328466812ULL;
unsigned long long int var_16 = 6870116442300592210ULL;
unsigned short var_18 = (unsigned short)46639;
int zero = 0;
int var_20 = -1446459664;
unsigned long long int var_21 = 14336366819402224631ULL;
unsigned long long int var_22 = 9198243462509920005ULL;
short var_23 = (short)3790;
unsigned short var_24 = (unsigned short)55457;
int var_25 = -2049629737;
unsigned short var_26 = (unsigned short)45842;
short var_27 = (short)5793;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)81;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)55;
signed char arr_0 [17] ;
long long int arr_1 [17] ;
unsigned short arr_5 [15] ;
int arr_7 [15] ;
unsigned short arr_10 [15] ;
_Bool arr_13 [15] [15] ;
short arr_2 [17] [17] ;
unsigned char arr_3 [17] [17] ;
signed char arr_6 [15] ;
short arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -3685804374850432364LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)63589;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1943089322;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)27154;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)21154;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-8632;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
