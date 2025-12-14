#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2181806574U;
unsigned int var_8 = 3726031714U;
int zero = 0;
unsigned short var_12 = (unsigned short)14424;
unsigned char var_13 = (unsigned char)79;
unsigned short var_14 = (unsigned short)6542;
unsigned char var_15 = (unsigned char)231;
unsigned char var_16 = (unsigned char)19;
unsigned int var_17 = 3225953754U;
unsigned int var_18 = 1224640695U;
unsigned short arr_0 [15] [15] ;
long long int arr_1 [15] ;
unsigned short arr_3 [15] [15] [15] ;
unsigned short arr_5 [15] [15] ;
long long int arr_6 [13] ;
long long int arr_10 [18] ;
unsigned long long int arr_12 [18] ;
signed char arr_13 [18] [18] ;
unsigned int arr_2 [15] ;
unsigned short arr_8 [13] ;
unsigned char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20859;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 8168510375677210892LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)18881;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)41655;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 4281264781941911057LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -3851401615756998764LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 3803707963650914338ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2514105580U : 3537142460U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45598 : (unsigned short)47365;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)251;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
