#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-26179;
short var_5 = (short)-17514;
signed char var_9 = (signed char)-30;
int zero = 0;
unsigned short var_10 = (unsigned short)22604;
unsigned short var_11 = (unsigned short)59345;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3900835497568010603LL;
signed char var_14 = (signed char)-6;
unsigned short var_15 = (unsigned short)58650;
short var_16 = (short)10226;
long long int var_17 = 7981960316415065488LL;
unsigned short var_18 = (unsigned short)56338;
short var_19 = (short)-24834;
unsigned long long int var_20 = 3918464833206493324ULL;
_Bool var_21 = (_Bool)1;
long long int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
short arr_5 [14] ;
short arr_6 [14] ;
signed char arr_9 [17] [17] ;
signed char arr_10 [17] ;
signed char arr_11 [17] ;
_Bool arr_14 [12] [12] ;
unsigned short arr_18 [12] [12] ;
unsigned char arr_4 [11] [11] ;
unsigned short arr_7 [14] ;
signed char arr_8 [14] ;
unsigned int arr_12 [17] ;
short arr_16 [12] [12] ;
long long int arr_17 [12] [12] ;
unsigned long long int arr_21 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 5166668547459010756LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)24093;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-22359;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)352;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)5228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)25439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 3161698634U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (short)4676;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = -1804050927750531754LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 15356613192307838333ULL : 13108388913673581592ULL;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
