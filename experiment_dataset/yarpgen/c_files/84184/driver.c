#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-52;
signed char var_4 = (signed char)94;
short var_5 = (short)31897;
unsigned short var_6 = (unsigned short)45847;
short var_7 = (short)1623;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)63;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 352721117U;
unsigned short var_12 = (unsigned short)16214;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-13327;
unsigned long long int var_15 = 15027442113768782288ULL;
_Bool arr_0 [21] ;
int arr_6 [20] ;
int arr_9 [14] ;
_Bool arr_2 [21] [21] ;
short arr_3 [21] ;
int arr_8 [20] ;
int arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 202180870;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -48573989;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-14973;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 811169702;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = 965337840;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
