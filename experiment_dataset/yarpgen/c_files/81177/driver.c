#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-8132;
short var_2 = (short)-19471;
unsigned char var_4 = (unsigned char)251;
long long int var_5 = -1245576412275398403LL;
unsigned long long int var_7 = 17983069582729801198ULL;
unsigned short var_8 = (unsigned short)52410;
unsigned int var_9 = 3615114959U;
int zero = 0;
short var_11 = (short)-23145;
unsigned int var_12 = 2914239463U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)43406;
unsigned int var_15 = 1143404819U;
unsigned int var_16 = 33216335U;
unsigned int arr_0 [21] ;
short arr_1 [21] ;
unsigned int arr_4 [14] ;
_Bool arr_5 [14] ;
long long int arr_10 [12] [12] ;
long long int arr_2 [21] ;
unsigned int arr_3 [21] ;
long long int arr_6 [14] ;
int arr_7 [14] ;
unsigned long long int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3526207885U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)18443;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 47372760U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 6559567834729186827LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -6437769535874039129LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1985150864U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 4735117353932177838LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -66861621;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 17609501020297007266ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
