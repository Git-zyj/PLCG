#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
int var_3 = -1696707404;
long long int var_4 = -3577294937995252726LL;
unsigned int var_5 = 2664476850U;
unsigned int var_6 = 1919831254U;
long long int var_7 = -3754408685747147898LL;
signed char var_8 = (signed char)-86;
short var_9 = (short)1420;
long long int var_10 = -6044210163860968810LL;
short var_11 = (short)22545;
int zero = 0;
unsigned short var_12 = (unsigned short)43497;
long long int var_13 = 6598007462849227776LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)209;
int var_16 = 1715633355;
unsigned short var_17 = (unsigned short)2913;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)137;
unsigned long long int arr_0 [15] ;
short arr_2 [15] [15] ;
short arr_3 [15] ;
long long int arr_4 [15] ;
_Bool arr_7 [15] ;
int arr_9 [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 13175779875893482410ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)28315;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)30862 : (short)-2418;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -6409196602624974913LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 153282578;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 5780973512968132433ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
