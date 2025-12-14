#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7582778043139855981LL;
unsigned long long int var_3 = 5945027782338896981ULL;
unsigned char var_4 = (unsigned char)41;
unsigned int var_5 = 817705263U;
unsigned int var_7 = 3779153450U;
unsigned long long int var_10 = 11061573647696631454ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 935439194U;
signed char var_15 = (signed char)113;
signed char var_16 = (signed char)76;
int var_17 = -368622237;
unsigned int var_18 = 298126542U;
unsigned char var_19 = (unsigned char)72;
unsigned char var_20 = (unsigned char)29;
long long int var_21 = -7010242505237637128LL;
unsigned char var_22 = (unsigned char)121;
unsigned int var_23 = 2408496806U;
signed char var_24 = (signed char)-105;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_3 [15] ;
unsigned char arr_9 [18] ;
short arr_10 [18] [18] ;
short arr_11 [18] [18] ;
long long int arr_16 [18] [18] [18] [18] [18] ;
unsigned char arr_19 [23] ;
unsigned int arr_20 [23] [23] ;
unsigned long long int arr_6 [15] [15] ;
unsigned long long int arr_7 [15] ;
unsigned int arr_8 [15] ;
long long int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 15757402783227623134ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 5815349996590424592ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)6299;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (short)7349;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 171226304272407636LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)24 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 2559147785U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 4989090788352023940ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 12958320080133048817ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1709352766U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = -2451253542612021423LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
