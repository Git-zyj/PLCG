#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18049830959303838705ULL;
unsigned short var_1 = (unsigned short)26217;
signed char var_2 = (signed char)106;
_Bool var_3 = (_Bool)1;
short var_4 = (short)28231;
unsigned short var_5 = (unsigned short)25925;
unsigned short var_6 = (unsigned short)45508;
unsigned short var_7 = (unsigned short)44257;
short var_8 = (short)-19550;
unsigned short var_9 = (unsigned short)20217;
short var_10 = (short)4715;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)47662;
signed char var_13 = (signed char)104;
unsigned short var_14 = (unsigned short)64467;
unsigned short var_15 = (unsigned short)47276;
_Bool var_16 = (_Bool)0;
short var_17 = (short)20886;
signed char var_18 = (signed char)19;
signed char var_19 = (signed char)31;
int zero = 0;
unsigned char var_20 = (unsigned char)93;
unsigned long long int var_21 = 13070840895843255856ULL;
unsigned long long int var_22 = 14059972612478219295ULL;
unsigned char var_23 = (unsigned char)149;
unsigned short var_24 = (unsigned short)59480;
short var_25 = (short)8862;
unsigned short var_26 = (unsigned short)24572;
unsigned short arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
short arr_4 [20] [20] ;
signed char arr_5 [20] [20] ;
_Bool arr_11 [20] [20] ;
_Bool arr_15 [13] ;
int arr_6 [20] ;
unsigned short arr_7 [20] ;
unsigned long long int arr_8 [20] [20] [20] ;
unsigned short arr_9 [20] [20] ;
_Bool arr_14 [20] [20] ;
short arr_19 [13] [13] ;
long long int arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)27390;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 13266430647533176852ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)20482;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -654113525;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)31716;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6621697686151553216ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)23844;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-26517 : (short)19111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -5835397473253662253LL : -1029116847537404229LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
