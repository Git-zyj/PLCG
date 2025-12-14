#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31369;
int var_2 = -286076365;
short var_4 = (short)9621;
int var_5 = 1535474291;
unsigned int var_6 = 2057941599U;
unsigned int var_7 = 830106432U;
short var_8 = (short)31318;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)189;
unsigned int var_12 = 3382400470U;
signed char var_13 = (signed char)-42;
int var_14 = -2140178421;
unsigned long long int var_15 = 8057976664441444853ULL;
long long int var_17 = -8046726140061991846LL;
unsigned int var_19 = 359900344U;
int zero = 0;
signed char var_20 = (signed char)11;
unsigned long long int var_21 = 5077120018650825461ULL;
long long int var_22 = -2224980071840753685LL;
unsigned int var_23 = 402474774U;
unsigned long long int var_24 = 10046675447806530758ULL;
signed char var_25 = (signed char)42;
int var_26 = 790251098;
unsigned int var_27 = 1073901179U;
signed char var_28 = (signed char)-24;
short var_29 = (short)12706;
signed char var_30 = (signed char)-42;
long long int var_31 = -2483193305236629234LL;
unsigned long long int var_32 = 4462384210547850813ULL;
unsigned int var_33 = 763815600U;
unsigned int var_34 = 809368159U;
short var_35 = (short)30070;
unsigned int var_36 = 3074371853U;
unsigned long long int var_37 = 5107786599758038322ULL;
short var_38 = (short)5050;
unsigned char var_39 = (unsigned char)88;
unsigned long long int arr_0 [16] ;
signed char arr_1 [16] ;
_Bool arr_2 [10] [10] ;
signed char arr_3 [10] ;
short arr_4 [10] ;
short arr_5 [10] [10] ;
_Bool arr_6 [10] [10] ;
unsigned int arr_7 [10] [10] [10] ;
unsigned long long int arr_9 [10] [10] [10] ;
int arr_10 [10] [10] [10] ;
unsigned int arr_13 [10] [10] ;
long long int arr_15 [10] ;
long long int arr_8 [10] [10] [10] ;
unsigned char arr_11 [10] [10] [10] ;
unsigned short arr_14 [10] ;
short arr_18 [10] ;
short arr_22 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 12009347634488009120ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)27282;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15381;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3479397349U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 9533612325581279686ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1685981951;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 1157171613U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -8279473881286322682LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1033135827583105840LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)22 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned short)52158;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (short)14197;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-12446;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
