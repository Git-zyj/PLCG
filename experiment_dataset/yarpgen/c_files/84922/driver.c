#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 4123277685U;
unsigned int var_8 = 1482018822U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1377301326U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 514214058U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 214199606U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1776337014U;
unsigned int var_22 = 2632049944U;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 433393373U;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned int arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_2 [11] [11] ;
_Bool arr_3 [11] [11] ;
_Bool arr_4 [11] ;
unsigned int arr_5 [13] ;
_Bool arr_7 [13] ;
_Bool arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3497082893U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1967572135U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3718117960U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 3289291289U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
