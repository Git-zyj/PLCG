#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13972;
unsigned int var_1 = 699452657U;
unsigned int var_2 = 804232467U;
unsigned short var_3 = (unsigned short)45599;
unsigned short var_4 = (unsigned short)4509;
short var_5 = (short)-7555;
signed char var_6 = (signed char)48;
unsigned long long int var_7 = 8924269042895787210ULL;
unsigned short var_8 = (unsigned short)36886;
unsigned long long int var_9 = 2208267386627189117ULL;
unsigned char var_10 = (unsigned char)23;
int zero = 0;
short var_11 = (short)-24903;
short var_12 = (short)20497;
long long int var_13 = 7565965116592330429LL;
unsigned long long int var_14 = 6343923452083077842ULL;
int var_15 = -1176450119;
short var_16 = (short)-22604;
unsigned char var_17 = (unsigned char)22;
long long int var_18 = -5507065547765820939LL;
unsigned char var_19 = (unsigned char)75;
short var_20 = (short)-25995;
unsigned short arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned char arr_2 [24] ;
int arr_3 [24] [24] ;
unsigned short arr_6 [10] [10] ;
unsigned int arr_8 [22] [22] ;
unsigned char arr_9 [22] ;
_Bool arr_4 [24] ;
unsigned int arr_7 [10] ;
int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)1616;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1233436409816045849ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 19458376;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)10549;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 3192888749U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1921000249U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -1026833849;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
