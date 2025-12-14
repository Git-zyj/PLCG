#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)31359;
unsigned long long int var_2 = 726469335156420665ULL;
long long int var_3 = -257445033728421031LL;
short var_5 = (short)-5952;
unsigned long long int var_6 = 2834822406624756651ULL;
int var_7 = -265816256;
short var_8 = (short)-15106;
unsigned char var_9 = (unsigned char)176;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6850433108310579548LL;
short var_12 = (short)-668;
unsigned char var_13 = (unsigned char)200;
signed char var_14 = (signed char)-51;
unsigned long long int var_15 = 16816028847681230592ULL;
short var_16 = (short)4784;
long long int var_17 = -468583792941213225LL;
unsigned int var_18 = 120018230U;
short var_19 = (short)19306;
unsigned char var_20 = (unsigned char)24;
unsigned char var_21 = (unsigned char)194;
signed char var_22 = (signed char)-24;
unsigned short arr_1 [20] ;
int arr_2 [20] ;
short arr_3 [20] [20] ;
short arr_6 [20] ;
signed char arr_7 [20] ;
int arr_8 [20] ;
unsigned char arr_10 [23] ;
unsigned long long int arr_11 [23] [23] ;
long long int arr_14 [13] [13] ;
long long int arr_15 [13] [13] ;
signed char arr_16 [13] [13] ;
short arr_4 [20] ;
short arr_5 [20] ;
unsigned char arr_9 [20] [20] ;
long long int arr_12 [23] ;
short arr_17 [13] ;
unsigned short arr_18 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51490 : (unsigned short)42775;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -968512145 : -1111379313;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-15211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-21520;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -1053472588;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 5063063694131549859ULL : 14184321312685237698ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = 2410186335841707725LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = -3710606850775633515LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-24336 : (short)-31593;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-32094 : (short)5787;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1892799261074749378LL : 2163177145998434957LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (short)2183;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned short)24066;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
