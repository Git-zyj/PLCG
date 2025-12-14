#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8682762800011577196LL;
unsigned long long int var_4 = 3804499470231481098ULL;
unsigned char var_5 = (unsigned char)159;
unsigned char var_7 = (unsigned char)57;
long long int var_8 = -1151202193892221020LL;
int zero = 0;
unsigned short var_12 = (unsigned short)41435;
unsigned short var_13 = (unsigned short)45572;
int var_14 = 121167317;
long long int var_15 = -9175402639412066920LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 18298034150859087678ULL;
long long int var_18 = -3034709306078721041LL;
int var_19 = 232517803;
unsigned short var_20 = (unsigned short)14413;
long long int var_21 = -7970111613499277151LL;
unsigned char var_22 = (unsigned char)101;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
long long int arr_3 [15] ;
unsigned int arr_6 [15] [15] ;
unsigned short arr_8 [13] [13] ;
unsigned long long int arr_12 [24] ;
_Bool arr_16 [16] ;
short arr_21 [11] ;
long long int arr_2 [19] ;
short arr_7 [15] ;
int arr_10 [13] [13] ;
unsigned int arr_11 [13] [13] ;
long long int arr_17 [16] ;
int arr_18 [16] ;
short arr_19 [16] [16] ;
long long int arr_24 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-17445;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)56945;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -2492144573248834326LL : 2709899224089326340LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 3612130084U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)41312;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 8268388175951424221ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (short)12828;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 7942367208012313595LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)23920 : (short)-6354;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = -2087278847;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 81130618U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = -8706722018484582152LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -1616422858;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (short)31334;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = 7068741781985835750LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
