#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 437837715U;
signed char var_2 = (signed char)15;
unsigned short var_3 = (unsigned short)34901;
unsigned char var_4 = (unsigned char)66;
int var_6 = 788135098;
unsigned long long int var_7 = 1184069204291159764ULL;
long long int var_8 = 854961215113809893LL;
unsigned short var_9 = (unsigned short)61876;
int var_10 = 1684002978;
unsigned char var_11 = (unsigned char)202;
long long int var_12 = -4184054006689479098LL;
int zero = 0;
long long int var_13 = -6063545005930720309LL;
short var_14 = (short)8690;
signed char var_15 = (signed char)95;
int var_16 = 1982477853;
signed char arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
_Bool arr_2 [16] ;
unsigned long long int arr_4 [16] ;
_Bool arr_5 [16] ;
short arr_8 [16] ;
unsigned char arr_6 [16] [16] ;
int arr_7 [16] ;
long long int arr_10 [16] ;
signed char arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 264675852295361846ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)-3139;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -912250413;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 2901248514802221742LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
