#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1541096768U;
long long int var_3 = -8261011665074555452LL;
unsigned short var_5 = (unsigned short)16804;
unsigned int var_6 = 3938794785U;
unsigned short var_7 = (unsigned short)46998;
unsigned short var_8 = (unsigned short)27874;
unsigned int var_9 = 2618959003U;
unsigned char var_11 = (unsigned char)239;
signed char var_12 = (signed char)42;
unsigned int var_13 = 2888986988U;
int var_14 = -862761116;
signed char var_15 = (signed char)126;
unsigned long long int var_16 = 2855109900257667486ULL;
int zero = 0;
int var_17 = 696866020;
unsigned short var_18 = (unsigned short)11439;
unsigned char var_19 = (unsigned char)137;
unsigned long long int var_20 = 18410028075540093161ULL;
unsigned long long int var_21 = 15791028868942331620ULL;
unsigned char var_22 = (unsigned char)0;
signed char var_23 = (signed char)20;
unsigned int var_24 = 1682864065U;
unsigned int var_25 = 1954901292U;
unsigned int var_26 = 4006467043U;
_Bool arr_0 [24] ;
unsigned short arr_1 [24] ;
_Bool arr_3 [13] [13] ;
unsigned char arr_7 [15] [15] ;
int arr_9 [15] ;
unsigned char arr_4 [13] ;
unsigned char arr_5 [13] [13] ;
unsigned long long int arr_10 [15] ;
unsigned int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)52675;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -945833194;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 2557224738485854015ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 989962669U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
