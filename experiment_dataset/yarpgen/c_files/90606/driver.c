#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1379230358U;
signed char var_2 = (signed char)116;
unsigned int var_4 = 2368155873U;
signed char var_5 = (signed char)53;
unsigned long long int var_7 = 6875820829585640594ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)3;
unsigned int var_11 = 2307310900U;
int zero = 0;
signed char var_12 = (signed char)-92;
unsigned int var_13 = 3155169818U;
unsigned int var_14 = 2560941766U;
_Bool arr_6 [16] ;
long long int arr_2 [25] ;
_Bool arr_3 [25] [25] ;
signed char arr_7 [16] ;
int arr_8 [16] ;
unsigned short arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 6096119406622638190LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -1741214292;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)21103;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
