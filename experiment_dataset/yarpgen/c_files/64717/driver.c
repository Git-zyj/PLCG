#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56975;
unsigned int var_1 = 1177661833U;
unsigned int var_2 = 1794074415U;
unsigned short var_3 = (unsigned short)28059;
unsigned char var_4 = (unsigned char)183;
int var_5 = 429842453;
unsigned short var_6 = (unsigned short)41542;
long long int var_8 = 1848659249899511805LL;
unsigned short var_9 = (unsigned short)45992;
unsigned int var_10 = 1406533173U;
int zero = 0;
unsigned int var_11 = 2103067048U;
unsigned short var_12 = (unsigned short)49375;
unsigned int var_13 = 2004684641U;
long long int var_14 = -2279821307604943531LL;
unsigned short var_15 = (unsigned short)33081;
unsigned short var_16 = (unsigned short)57932;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
int arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned short arr_2 [13] [13] ;
unsigned short arr_5 [13] ;
unsigned char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 825617005U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 4227988U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1163372917;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)43900 : (unsigned short)29324;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)6365;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9583 : (unsigned short)16231;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)229 : (unsigned char)70;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
