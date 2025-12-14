#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1496556104;
_Bool var_5 = (_Bool)1;
int var_6 = 750177137;
short var_7 = (short)-14866;
unsigned short var_9 = (unsigned short)17473;
unsigned long long int var_13 = 2207750604052488808ULL;
short var_15 = (short)6892;
int var_16 = 1432560170;
int zero = 0;
unsigned short var_17 = (unsigned short)63378;
signed char var_18 = (signed char)-87;
unsigned long long int var_19 = 2220089315225831056ULL;
unsigned long long int var_20 = 13589785342873824274ULL;
signed char var_21 = (signed char)-88;
unsigned char var_22 = (unsigned char)137;
signed char var_23 = (signed char)-91;
signed char var_24 = (signed char)-14;
signed char arr_0 [24] ;
unsigned short arr_1 [24] ;
short arr_8 [15] ;
unsigned int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)34700;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)2125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2960794442U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
