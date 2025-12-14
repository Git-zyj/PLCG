#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3638854579U;
int var_1 = -1676427616;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)26;
short var_4 = (short)1909;
unsigned int var_5 = 1601052990U;
unsigned int var_6 = 1661425448U;
long long int var_7 = -1866197187501627692LL;
int var_8 = 269009635;
_Bool var_9 = (_Bool)0;
int var_10 = -217113722;
int var_11 = 1088146375;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)29;
int var_14 = 2072823304;
unsigned short var_15 = (unsigned short)10456;
unsigned long long int var_16 = 15286898215899356744ULL;
long long int var_17 = 1930578807497906040LL;
unsigned short arr_3 [14] ;
unsigned int arr_8 [12] ;
unsigned int arr_9 [12] ;
unsigned int arr_12 [13] ;
short arr_13 [13] ;
unsigned char arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)45977;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4084334660U : 3502614490U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2168294187U : 136564102U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2826501131U : 1489793598U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)2358 : (short)-23766;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)242;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
