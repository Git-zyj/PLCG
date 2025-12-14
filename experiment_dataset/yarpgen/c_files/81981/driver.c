#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
signed char var_4 = (signed char)113;
unsigned char var_5 = (unsigned char)12;
unsigned short var_6 = (unsigned short)7142;
signed char var_7 = (signed char)18;
unsigned char var_8 = (unsigned char)57;
int zero = 0;
unsigned int var_10 = 3418829445U;
signed char var_11 = (signed char)-16;
signed char var_12 = (signed char)100;
unsigned char var_13 = (unsigned char)21;
unsigned char var_14 = (unsigned char)131;
unsigned short var_15 = (unsigned short)35701;
unsigned long long int var_16 = 15619598319008898830ULL;
signed char var_17 = (signed char)-36;
signed char var_18 = (signed char)57;
signed char var_19 = (signed char)7;
unsigned char arr_1 [14] [14] ;
unsigned int arr_3 [12] ;
unsigned char arr_4 [23] [23] ;
signed char arr_6 [23] [23] ;
signed char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3289657169U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
