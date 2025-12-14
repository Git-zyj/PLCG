#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9940;
signed char var_3 = (signed char)80;
unsigned short var_5 = (unsigned short)4497;
int var_6 = 965525722;
long long int var_7 = -5081434380586696569LL;
unsigned int var_9 = 1978371469U;
unsigned short var_11 = (unsigned short)43953;
int zero = 0;
int var_12 = -998640254;
short var_13 = (short)-5202;
int var_14 = -254316798;
unsigned short arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned short arr_2 [16] [16] ;
signed char arr_3 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)23511;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)13512;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-20543;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
