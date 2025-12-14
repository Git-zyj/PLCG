#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3167456746U;
unsigned char var_1 = (unsigned char)251;
unsigned short var_6 = (unsigned short)54218;
unsigned int var_9 = 3995287729U;
unsigned long long int var_10 = 13492155292280700824ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)160;
long long int var_13 = -7130702888930517411LL;
unsigned short var_14 = (unsigned short)29075;
int var_15 = -1414008487;
signed char var_16 = (signed char)-30;
short var_17 = (short)17230;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8572410367514896212LL;
int var_20 = 1336285839;
short var_21 = (short)17655;
short var_22 = (short)18494;
_Bool var_23 = (_Bool)1;
int var_24 = 67436288;
unsigned char var_25 = (unsigned char)39;
unsigned char var_26 = (unsigned char)16;
signed char var_27 = (signed char)19;
unsigned int var_28 = 4008463121U;
unsigned short arr_0 [15] ;
_Bool arr_1 [15] ;
short arr_2 [10] [10] ;
short arr_3 [10] ;
long long int arr_4 [10] ;
unsigned int arr_5 [10] ;
_Bool arr_6 [10] ;
short arr_9 [10] [10] ;
_Bool arr_12 [10] [10] ;
unsigned long long int arr_20 [10] ;
short arr_10 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)3756;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)8115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)23063;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 4753063102460190644LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 4255400416U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)1122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 15423155909201983970ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)12330;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
