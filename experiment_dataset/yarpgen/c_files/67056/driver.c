#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)45606;
short var_4 = (short)-5216;
unsigned short var_5 = (unsigned short)28840;
long long int var_6 = -1115355421163038894LL;
unsigned short var_7 = (unsigned short)37432;
int var_8 = -1144871522;
long long int var_9 = -2166287211779655521LL;
int var_10 = 93979862;
unsigned int var_12 = 3128913883U;
int zero = 0;
unsigned int var_14 = 80409282U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-14160;
long long int var_17 = -5231677445279763563LL;
short var_18 = (short)-7945;
unsigned int var_19 = 4038956274U;
int var_20 = -835892896;
short var_21 = (short)11344;
unsigned int var_22 = 2961394504U;
signed char var_23 = (signed char)120;
short arr_0 [23] ;
unsigned short arr_1 [23] ;
int arr_4 [18] ;
unsigned int arr_6 [18] [18] ;
short arr_2 [23] ;
unsigned int arr_3 [23] ;
long long int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)11871;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)61100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -297537394;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 455740665U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)24939;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 142897823U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = -2011104325122794101LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
