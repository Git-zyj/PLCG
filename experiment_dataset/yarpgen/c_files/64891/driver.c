#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
long long int var_5 = -5041440396962954115LL;
long long int var_7 = -4390941411340611485LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)135;
unsigned long long int var_12 = 13284197519750458852ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4256215752U;
short var_16 = (short)21022;
long long int var_17 = 3461207788090168946LL;
int var_18 = 1653609600;
signed char var_19 = (signed char)3;
_Bool var_20 = (_Bool)0;
signed char arr_0 [23] ;
short arr_1 [23] [23] ;
unsigned char arr_4 [15] ;
unsigned short arr_2 [23] ;
long long int arr_3 [23] [23] ;
unsigned char arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-15231 : (short)12829;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8894 : (unsigned short)60983;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -462994236018356191LL : -1996582774448021474LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned char)74;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
