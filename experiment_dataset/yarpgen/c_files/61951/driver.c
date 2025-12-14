#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3571920214U;
signed char var_1 = (signed char)96;
int var_3 = 596129459;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2615081313U;
short var_8 = (short)7219;
unsigned int var_10 = 1834419711U;
unsigned long long int var_11 = 6916351768157252115ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)50843;
unsigned long long int var_14 = 2488001050051783941ULL;
signed char var_15 = (signed char)-46;
unsigned long long int var_16 = 9202694276751382805ULL;
unsigned int var_17 = 1405770618U;
unsigned short var_18 = (unsigned short)33146;
unsigned int arr_0 [24] [24] ;
_Bool arr_2 [24] [24] ;
int arr_5 [22] ;
unsigned long long int arr_6 [22] ;
_Bool arr_3 [24] ;
unsigned char arr_4 [24] ;
_Bool arr_7 [22] ;
unsigned int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 414714467U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 459245210;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 13992945873576695416ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 3982402313U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
