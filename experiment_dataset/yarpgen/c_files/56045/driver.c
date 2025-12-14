#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)238;
unsigned short var_3 = (unsigned short)39728;
unsigned long long int var_5 = 5390693479862598864ULL;
unsigned short var_6 = (unsigned short)5591;
unsigned short var_8 = (unsigned short)28453;
signed char var_9 = (signed char)22;
signed char var_10 = (signed char)-24;
unsigned char var_11 = (unsigned char)175;
int var_14 = 1908689400;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int var_18 = 713523745;
unsigned short var_19 = (unsigned short)47913;
signed char arr_0 [15] [15] ;
int arr_1 [15] [15] ;
int arr_2 [15] [15] [15] ;
int arr_3 [15] [15] [15] ;
unsigned short arr_6 [15] ;
int arr_7 [15] [15] [15] [15] ;
int arr_8 [15] ;
_Bool arr_9 [15] [15] [15] ;
unsigned char arr_14 [13] [13] ;
unsigned long long int arr_15 [13] ;
int arr_20 [13] ;
int arr_23 [13] [13] ;
unsigned char arr_5 [15] ;
int arr_10 [15] [15] ;
unsigned short arr_11 [15] ;
unsigned char arr_12 [15] [15] ;
signed char arr_13 [15] ;
signed char arr_16 [13] ;
unsigned int arr_17 [13] ;
int arr_26 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -494644237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -311035410;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1691728463;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)44562;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 520043957;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1395862698;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)11 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 17761774584572573723ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 2125077385 : 1712740431;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = -1565439604;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -2118231677;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned short)8529;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 3585240897U : 2494169915U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? -1741846494 : 1243940503;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
