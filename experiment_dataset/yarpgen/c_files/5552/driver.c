#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned int var_1 = 3780140876U;
unsigned int var_4 = 2920854413U;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)10;
int var_11 = 1939553536;
unsigned int var_12 = 3588374379U;
unsigned short var_16 = (unsigned short)35352;
unsigned long long int var_17 = 14360272809629949457ULL;
short var_18 = (short)24563;
int zero = 0;
unsigned int var_20 = 427316740U;
long long int var_21 = -2793066928348083997LL;
unsigned long long int var_22 = 6818365345036183951ULL;
long long int var_23 = -1686962353344507059LL;
long long int var_24 = 3974274370711721443LL;
long long int var_25 = -2928034899146115367LL;
unsigned int var_26 = 1994982652U;
short var_27 = (short)-19328;
unsigned long long int var_28 = 7977228389690597199ULL;
unsigned int arr_2 [13] [13] [13] ;
long long int arr_6 [13] [13] [13] ;
unsigned int arr_12 [13] [13] [13] ;
long long int arr_14 [22] ;
unsigned long long int arr_15 [22] [22] ;
unsigned int arr_19 [19] ;
unsigned short arr_20 [19] [19] ;
unsigned short arr_13 [13] ;
long long int arr_18 [10] ;
int arr_21 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2188085113U : 1248827001U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2405144439442660371LL : 2962784727842591145LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2595767334U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 5346821518656771462LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 13477324032694306129ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 3071229156U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)62880;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55286 : (unsigned short)34828;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = -5111018585938065406LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = -1749090892;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
