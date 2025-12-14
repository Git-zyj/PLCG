#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)5;
short var_4 = (short)8759;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-87;
long long int var_9 = 3883265664441737950LL;
signed char var_11 = (signed char)-6;
int zero = 0;
short var_12 = (short)31479;
long long int var_13 = 5691660378055372937LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)134;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)43;
short var_19 = (short)-14597;
signed char arr_0 [21] ;
short arr_1 [21] ;
signed char arr_2 [21] [21] ;
_Bool arr_4 [21] ;
short arr_5 [21] ;
unsigned char arr_3 [21] [21] ;
long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-22172;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)109 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-20852 : (short)-15864;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -1031403887703424342LL : 2915734891786577539LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
