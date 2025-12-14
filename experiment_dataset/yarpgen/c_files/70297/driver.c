#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 1835132717308359742LL;
short var_4 = (short)4572;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1324356950U;
_Bool var_7 = (_Bool)0;
long long int var_9 = -6261695418619690330LL;
short var_10 = (short)-3873;
short var_11 = (short)10790;
unsigned int var_12 = 2118218732U;
unsigned int var_14 = 1776094930U;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)32709;
unsigned int var_18 = 482781737U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3446683920U;
unsigned int var_21 = 1374873863U;
unsigned int var_22 = 2649528883U;
unsigned int var_23 = 347542187U;
long long int var_24 = 6453721377298033392LL;
long long int arr_0 [15] ;
short arr_1 [15] ;
unsigned int arr_2 [15] [15] [15] ;
short arr_3 [15] ;
long long int arr_12 [21] [21] ;
unsigned int arr_13 [21] ;
long long int arr_4 [15] ;
_Bool arr_8 [15] [15] [15] ;
long long int arr_11 [15] ;
short arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -8903771086702882700LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-12447;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 231983049U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-23022;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = -3934381657114829958LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 829492120U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2970656514430625341LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -1695165655178562672LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (short)27983;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
