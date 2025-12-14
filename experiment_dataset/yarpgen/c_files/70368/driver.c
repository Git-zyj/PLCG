#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
int var_6 = -1517578211;
unsigned char var_10 = (unsigned char)74;
signed char var_13 = (signed char)84;
_Bool var_14 = (_Bool)1;
int var_15 = 2144059063;
unsigned int var_16 = 2040509170U;
int zero = 0;
unsigned long long int var_18 = 9816791545037384759ULL;
unsigned int var_19 = 368374885U;
unsigned char var_20 = (unsigned char)174;
unsigned short var_21 = (unsigned short)51652;
unsigned int arr_0 [23] [23] ;
_Bool arr_1 [23] ;
short arr_2 [12] ;
unsigned int arr_3 [12] [12] ;
unsigned short arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 310568662U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-10126;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2655011687U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)55415;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1799674744U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 620066537;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
