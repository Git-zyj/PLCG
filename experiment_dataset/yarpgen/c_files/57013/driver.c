#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1031540930962818925LL;
int var_2 = 1490950749;
signed char var_3 = (signed char)1;
int var_4 = -1683067146;
unsigned short var_7 = (unsigned short)422;
signed char var_8 = (signed char)100;
signed char var_10 = (signed char)-80;
unsigned long long int var_11 = 11064732671069241030ULL;
unsigned long long int var_13 = 7317431002281723165ULL;
short var_14 = (short)14376;
short var_16 = (short)-22116;
signed char var_17 = (signed char)52;
short var_18 = (short)-15083;
int zero = 0;
unsigned int var_19 = 2991019067U;
unsigned char var_20 = (unsigned char)170;
unsigned char var_21 = (unsigned char)86;
int var_22 = -1391128843;
unsigned short var_23 = (unsigned short)33823;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 3422144589U;
unsigned short var_26 = (unsigned short)23432;
_Bool var_27 = (_Bool)1;
unsigned long long int arr_3 [20] [20] ;
unsigned int arr_6 [17] ;
signed char arr_11 [14] ;
unsigned char arr_12 [14] ;
long long int arr_20 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 5292251226016682727ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 292504252U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = -6111104230232515897LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
