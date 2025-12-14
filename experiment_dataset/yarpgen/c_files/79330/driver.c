#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2080494019;
unsigned int var_2 = 3625594269U;
unsigned long long int var_3 = 4697952263505389767ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)46453;
signed char var_7 = (signed char)0;
unsigned int var_9 = 177770912U;
unsigned char var_10 = (unsigned char)221;
signed char var_12 = (signed char)2;
unsigned long long int var_13 = 15164045954950665491ULL;
unsigned char var_15 = (unsigned char)242;
unsigned short var_16 = (unsigned short)5920;
long long int var_17 = 9096682128608734058LL;
int var_18 = -2085653879;
unsigned long long int var_19 = 447678369552632607ULL;
int zero = 0;
signed char var_20 = (signed char)94;
unsigned long long int var_21 = 6099253470220527104ULL;
unsigned long long int var_22 = 5632457545074180853ULL;
int var_23 = -971701647;
long long int var_24 = -3564227840741502732LL;
_Bool var_25 = (_Bool)0;
long long int arr_0 [12] [12] ;
long long int arr_2 [12] ;
unsigned char arr_3 [12] ;
_Bool arr_4 [12] ;
short arr_5 [12] ;
unsigned int arr_13 [13] [13] [13] ;
unsigned int arr_7 [12] [12] ;
unsigned short arr_8 [12] ;
_Bool arr_9 [12] ;
_Bool arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1101389423355593209LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 5364835545030059063LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-26628 : (short)22775;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 225183124U : 3383240321U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4237887781U : 369051968U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54742 : (unsigned short)12133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
