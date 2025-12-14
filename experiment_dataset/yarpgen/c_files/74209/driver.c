#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32072;
signed char var_1 = (signed char)54;
long long int var_2 = 420115303356128997LL;
unsigned char var_3 = (unsigned char)255;
long long int var_6 = -2181748232491356628LL;
signed char var_8 = (signed char)-10;
unsigned long long int var_11 = 17391166219478754341ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)22378;
int zero = 0;
unsigned long long int var_16 = 17659298257523111074ULL;
short var_17 = (short)-8622;
short var_18 = (short)-22405;
unsigned long long int var_19 = 51694107790415998ULL;
long long int var_20 = -2622149812922743289LL;
short var_21 = (short)8316;
long long int var_22 = -582428986239268319LL;
unsigned long long int arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
short arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
unsigned char arr_4 [11] [11] [11] ;
int arr_5 [11] ;
unsigned char arr_11 [11] [11] [11] ;
long long int arr_14 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 13568628186902741798ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)11893 : (short)25269;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 55029105 : 304383405;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -4665183984188245874LL : -8488012649793066408LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
