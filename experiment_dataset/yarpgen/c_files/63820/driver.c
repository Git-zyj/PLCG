#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14508274269331392670ULL;
signed char var_1 = (signed char)-122;
int var_5 = -2039911860;
int var_6 = -1670949207;
unsigned long long int var_8 = 7843459409682037807ULL;
unsigned short var_9 = (unsigned short)26218;
long long int var_11 = 6392156379627351720LL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-71;
unsigned char var_16 = (unsigned char)13;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 310001110345566917ULL;
int zero = 0;
unsigned long long int var_20 = 151646861200221757ULL;
long long int var_21 = 3366900677601043734LL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)87;
signed char var_24 = (signed char)19;
unsigned long long int var_25 = 26456233606773535ULL;
unsigned short var_26 = (unsigned short)22071;
signed char var_27 = (signed char)95;
unsigned long long int var_28 = 10254426287179255784ULL;
signed char arr_0 [23] ;
short arr_5 [23] [23] ;
long long int arr_11 [11] ;
_Bool arr_12 [11] ;
signed char arr_3 [23] [23] ;
_Bool arr_4 [23] ;
unsigned int arr_7 [23] ;
_Bool arr_8 [23] ;
short arr_13 [11] ;
unsigned long long int arr_14 [11] ;
unsigned char arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-25859;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = -6902660178773664574LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1467312497U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (short)26989;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = 7497956383879835849ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (unsigned char)184;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
