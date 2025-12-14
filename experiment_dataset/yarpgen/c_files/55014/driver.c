#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
signed char var_3 = (signed char)-81;
unsigned char var_6 = (unsigned char)144;
int var_7 = 1329430627;
unsigned long long int var_8 = 2244518707202703593ULL;
long long int var_9 = -7013149161905224490LL;
signed char var_10 = (signed char)93;
int zero = 0;
unsigned char var_11 = (unsigned char)222;
int var_12 = -2078572570;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1858014059680416178LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-21;
long long int var_17 = -128274492986277691LL;
_Bool arr_0 [14] ;
short arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned char arr_3 [14] ;
_Bool arr_4 [11] ;
_Bool arr_5 [11] [11] ;
unsigned char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)19447;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)201;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
