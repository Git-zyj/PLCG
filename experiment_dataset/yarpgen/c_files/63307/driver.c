#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29455;
unsigned char var_1 = (unsigned char)104;
signed char var_3 = (signed char)-104;
unsigned char var_4 = (unsigned char)24;
unsigned short var_6 = (unsigned short)26073;
unsigned short var_7 = (unsigned short)12433;
unsigned char var_8 = (unsigned char)57;
signed char var_10 = (signed char)-116;
unsigned int var_11 = 1207606237U;
unsigned char var_14 = (unsigned char)4;
signed char var_15 = (signed char)-93;
unsigned short var_17 = (unsigned short)28155;
int zero = 0;
signed char var_19 = (signed char)-75;
signed char var_20 = (signed char)68;
unsigned short var_21 = (unsigned short)34994;
signed char var_22 = (signed char)57;
signed char var_23 = (signed char)18;
unsigned short var_24 = (unsigned short)35277;
unsigned int var_25 = 2276996714U;
signed char var_26 = (signed char)115;
unsigned char var_27 = (unsigned char)52;
signed char var_28 = (signed char)-79;
unsigned int var_29 = 1979018179U;
signed char var_30 = (signed char)101;
unsigned int arr_5 [21] ;
unsigned short arr_6 [21] [21] ;
signed char arr_7 [21] [21] ;
unsigned char arr_8 [21] [21] [21] ;
signed char arr_9 [21] [21] ;
unsigned int arr_14 [21] [21] ;
unsigned short arr_15 [21] ;
unsigned short arr_17 [21] ;
unsigned char arr_4 [13] ;
unsigned short arr_11 [21] ;
unsigned int arr_12 [21] [21] [21] ;
unsigned char arr_13 [21] ;
signed char arr_16 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 320753908U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)31550;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 3489034882U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned short)14430;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned short)53542;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)20576;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3145910398U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (signed char)38;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
