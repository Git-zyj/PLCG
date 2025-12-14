#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-10836;
signed char var_2 = (signed char)-89;
short var_3 = (short)-24957;
unsigned short var_4 = (unsigned short)11103;
unsigned int var_5 = 3179985512U;
signed char var_6 = (signed char)8;
signed char var_7 = (signed char)33;
long long int var_8 = 5315958228354962482LL;
long long int var_9 = -425259810848576449LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 6648790938018038658LL;
unsigned short var_12 = (unsigned short)16069;
unsigned short var_13 = (unsigned short)36908;
signed char var_14 = (signed char)106;
short var_15 = (short)-22727;
unsigned short var_16 = (unsigned short)12796;
int zero = 0;
unsigned short var_17 = (unsigned short)33824;
unsigned short var_18 = (unsigned short)31960;
signed char var_19 = (signed char)19;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)183;
signed char var_22 = (signed char)112;
long long int var_23 = 778835415769106434LL;
int var_24 = 1082259220;
short var_25 = (short)10766;
long long int var_26 = -2788731127197003479LL;
unsigned char var_27 = (unsigned char)178;
int var_28 = -1338618157;
unsigned int var_29 = 1099051341U;
signed char var_30 = (signed char)56;
signed char var_31 = (signed char)-48;
unsigned int var_32 = 462905937U;
unsigned int var_33 = 3746036798U;
unsigned int var_34 = 520433751U;
unsigned long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned char arr_4 [10] [10] ;
unsigned int arr_5 [10] ;
unsigned long long int arr_6 [10] [10] ;
long long int arr_7 [10] [10] ;
unsigned short arr_11 [14] [14] ;
unsigned int arr_12 [14] [14] ;
unsigned short arr_14 [14] ;
long long int arr_16 [14] ;
unsigned int arr_20 [22] ;
unsigned long long int arr_21 [22] ;
_Bool arr_2 [10] ;
_Bool arr_3 [10] ;
_Bool arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1138436317400288119ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)38732;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 3110866604U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 17634791688237064834ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 4053055782987997302LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)40961;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 4080179712U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned short)10792;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 9205028888129955174LL : 2342288057593416992LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 3404065906U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 4473184489999933466ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
