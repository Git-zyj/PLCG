#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1471627460271789990LL;
unsigned long long int var_1 = 13765784670346723471ULL;
int var_2 = 796060002;
unsigned char var_3 = (unsigned char)230;
unsigned int var_6 = 3770181960U;
int var_9 = 794539934;
int zero = 0;
unsigned short var_10 = (unsigned short)63614;
_Bool var_11 = (_Bool)1;
int var_12 = 1772077321;
unsigned char var_13 = (unsigned char)5;
unsigned long long int var_14 = 17330956974015370370ULL;
unsigned short var_15 = (unsigned short)56525;
long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
long long int arr_5 [16] ;
unsigned long long int arr_6 [16] ;
unsigned char arr_2 [23] ;
unsigned short arr_7 [16] ;
unsigned short arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -721091267743334531LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 151115667977220210ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 8026234019417290060LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2043664716673626174ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)33235;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36296 : (unsigned short)33454;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
