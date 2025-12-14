#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1054686969;
short var_2 = (short)-11115;
unsigned int var_3 = 2310802174U;
short var_4 = (short)-20374;
unsigned char var_5 = (unsigned char)228;
unsigned long long int var_6 = 15038314019975000062ULL;
unsigned char var_7 = (unsigned char)11;
unsigned char var_8 = (unsigned char)135;
unsigned short var_9 = (unsigned short)57319;
int zero = 0;
unsigned char var_10 = (unsigned char)65;
unsigned short var_11 = (unsigned short)4088;
long long int var_12 = -774572727008804569LL;
int var_13 = -1221127089;
int var_14 = -1964687580;
int var_15 = -1083663990;
int var_16 = 621288159;
int var_17 = 1596236662;
int var_18 = -52117625;
_Bool var_19 = (_Bool)0;
int arr_1 [14] [14] ;
unsigned short arr_3 [14] [14] ;
long long int arr_4 [14] ;
unsigned long long int arr_9 [14] ;
short arr_19 [20] [20] ;
int arr_7 [14] [14] [14] ;
unsigned char arr_12 [14] [14] ;
int arr_15 [12] ;
int arr_16 [12] ;
long long int arr_17 [12] [12] ;
int arr_20 [20] ;
int arr_21 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1706971787;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)64392;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -108215496021880025LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 7015042786974835380ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (short)28283;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 35997263;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = -57201649;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = -1648680773;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 3551399286366138170LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = 2131514479;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = -170662075;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
