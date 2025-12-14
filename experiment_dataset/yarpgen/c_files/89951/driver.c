#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3294023588U;
signed char var_3 = (signed char)61;
signed char var_4 = (signed char)-48;
long long int var_8 = 1385282847764117570LL;
short var_12 = (short)13842;
unsigned long long int var_14 = 14723359648924924267ULL;
int zero = 0;
short var_15 = (short)-22241;
int var_16 = -1317416404;
unsigned char var_17 = (unsigned char)37;
signed char var_18 = (signed char)49;
unsigned int var_19 = 3679669635U;
short var_20 = (short)31960;
_Bool arr_0 [24] ;
unsigned int arr_1 [24] ;
short arr_2 [24] ;
int arr_5 [15] [15] ;
unsigned int arr_6 [15] ;
short arr_8 [15] [15] [15] ;
unsigned char arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 173693583U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)6951;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 754655370;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 3961747803U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-31480;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
