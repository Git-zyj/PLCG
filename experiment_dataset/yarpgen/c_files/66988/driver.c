#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2208630024U;
signed char var_1 = (signed char)-21;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 9873851183110360863ULL;
unsigned char var_7 = (unsigned char)111;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-2;
unsigned char var_10 = (unsigned char)164;
signed char var_11 = (signed char)119;
unsigned int var_12 = 554765866U;
signed char var_13 = (signed char)-110;
int zero = 0;
unsigned int var_14 = 1354968367U;
signed char var_15 = (signed char)117;
_Bool var_16 = (_Bool)0;
int var_17 = 1622695922;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)88;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
int arr_4 [22] ;
signed char arr_2 [22] [22] ;
signed char arr_3 [22] ;
signed char arr_6 [22] ;
long long int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 4069603209538091581LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 6365675710536438662LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1095977418;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -5863958005024006791LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
