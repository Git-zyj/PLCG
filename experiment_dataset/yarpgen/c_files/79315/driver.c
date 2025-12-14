#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2202898686U;
signed char var_2 = (signed char)-101;
unsigned short var_5 = (unsigned short)48646;
unsigned int var_11 = 2209620914U;
int var_13 = -1613777955;
unsigned short var_16 = (unsigned short)25012;
int zero = 0;
signed char var_17 = (signed char)-94;
unsigned int var_18 = 2134264709U;
unsigned short var_19 = (unsigned short)15028;
unsigned short var_20 = (unsigned short)9846;
signed char var_21 = (signed char)104;
unsigned short var_22 = (unsigned short)45007;
unsigned short var_23 = (unsigned short)24518;
signed char var_24 = (signed char)17;
short var_25 = (short)29306;
unsigned int var_26 = 2392501809U;
int var_27 = -906005660;
unsigned short var_28 = (unsigned short)20479;
unsigned int var_29 = 1096731532U;
unsigned int var_30 = 3646789124U;
unsigned int var_31 = 3989017557U;
unsigned short var_32 = (unsigned short)24161;
int var_33 = 767870037;
unsigned int var_34 = 846551459U;
unsigned short var_35 = (unsigned short)14045;
unsigned int var_36 = 451438622U;
short var_37 = (short)25665;
int var_38 = 1357351353;
int arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_2 [16] ;
unsigned int arr_3 [16] [16] ;
unsigned short arr_4 [13] ;
signed char arr_5 [13] ;
int arr_6 [10] ;
unsigned int arr_7 [10] [10] ;
unsigned int arr_13 [10] [10] [10] ;
short arr_16 [10] ;
unsigned short arr_21 [16] [16] [16] ;
unsigned short arr_17 [10] [10] ;
unsigned short arr_20 [16] ;
unsigned long long int arr_23 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1131336503;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2872701651U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2042546388U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2509068109U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)45659;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 2038198711;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 3118682585U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2820761297U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (short)-2283;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)19710;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)46202;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (unsigned short)19856;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 7324181491473716721ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
