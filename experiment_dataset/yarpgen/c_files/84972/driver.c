#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10272622014196046041ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3155253871U;
long long int var_3 = -6290607982762882630LL;
unsigned char var_4 = (unsigned char)193;
long long int var_7 = -442703429457097344LL;
unsigned char var_8 = (unsigned char)201;
unsigned char var_10 = (unsigned char)45;
unsigned int var_11 = 2083090430U;
short var_14 = (short)-17394;
unsigned char var_15 = (unsigned char)116;
int zero = 0;
short var_16 = (short)23761;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)247;
unsigned char var_20 = (unsigned char)2;
long long int arr_0 [14] ;
short arr_2 [14] ;
_Bool arr_5 [14] ;
unsigned long long int arr_6 [14] [14] ;
unsigned char arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -7177095507921182685LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-31686;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 11167441687197986662ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
