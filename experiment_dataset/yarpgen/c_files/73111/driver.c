#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47641;
unsigned short var_1 = (unsigned short)57687;
long long int var_2 = -2533455855961847004LL;
unsigned long long int var_5 = 3582255983180234933ULL;
unsigned char var_6 = (unsigned char)247;
_Bool var_10 = (_Bool)0;
long long int var_11 = -2611837991320928791LL;
unsigned short var_13 = (unsigned short)46761;
int var_16 = 306016136;
unsigned short var_18 = (unsigned short)18294;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1907058971;
signed char var_22 = (signed char)110;
unsigned short var_23 = (unsigned short)57703;
int var_24 = -1289330049;
unsigned short var_25 = (unsigned short)16276;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 2907085386U;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)23421;
short var_30 = (short)6758;
unsigned long long int arr_0 [10] ;
_Bool arr_1 [10] [10] ;
unsigned char arr_2 [10] [10] ;
long long int arr_6 [10] ;
int arr_7 [10] ;
_Bool arr_10 [22] [22] ;
unsigned char arr_11 [22] [22] ;
int arr_12 [22] ;
int arr_8 [10] [10] ;
_Bool arr_9 [10] ;
unsigned char arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 55311067047698402ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -991954924075397344LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1857585671;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 1885402082;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -684728770 : 1333540967;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned char)184;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
