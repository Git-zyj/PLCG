#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5665;
long long int var_2 = -7224711525999300861LL;
long long int var_3 = 747625791848642270LL;
long long int var_4 = 3483782186218084183LL;
unsigned long long int var_6 = 12015853629978925348ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)64490;
unsigned int var_13 = 735063607U;
signed char var_14 = (signed char)-21;
short var_15 = (short)-3553;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 544798022;
short var_19 = (short)-16393;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5230214204343711235LL;
unsigned long long int var_22 = 18380976764811433229ULL;
int var_23 = 1739850183;
_Bool var_24 = (_Bool)1;
long long int var_25 = -4479178454147709212LL;
int var_26 = 897742922;
signed char var_27 = (signed char)-122;
unsigned long long int var_28 = 10256468187940457919ULL;
_Bool arr_0 [14] ;
int arr_1 [14] ;
int arr_6 [14] ;
long long int arr_8 [23] ;
long long int arr_9 [23] ;
short arr_16 [25] [25] ;
int arr_18 [25] ;
_Bool arr_2 [14] ;
unsigned short arr_3 [14] ;
short arr_4 [14] [14] ;
int arr_10 [23] ;
int arr_15 [15] ;
unsigned int arr_19 [25] ;
int arr_20 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -43553648;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 355585397;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 3485197327876644864LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 8553565620233899450LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (short)12566;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 703227669;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)29269;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)26709;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1041927636;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1567465371 : -805016697;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3309665182U : 2579201703U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 351174940 : 1540149436;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
