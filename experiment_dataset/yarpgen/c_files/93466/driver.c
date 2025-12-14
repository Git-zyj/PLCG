#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -398637020;
unsigned int var_4 = 2899713120U;
unsigned short var_6 = (unsigned short)22087;
unsigned char var_7 = (unsigned char)112;
signed char var_8 = (signed char)78;
short var_11 = (short)-7766;
unsigned char var_12 = (unsigned char)174;
int zero = 0;
short var_13 = (short)6991;
int var_14 = -1070640743;
long long int var_15 = -1254323250065910639LL;
unsigned char var_16 = (unsigned char)230;
unsigned int var_17 = 259423407U;
long long int arr_0 [16] [16] ;
_Bool arr_3 [22] ;
long long int arr_7 [22] ;
long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -3735339476006140824LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -4101038813132009591LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 4386593739017072261LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
