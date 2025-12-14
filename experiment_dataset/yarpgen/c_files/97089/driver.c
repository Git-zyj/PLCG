#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-159;
short var_2 = (short)7311;
_Bool var_3 = (_Bool)1;
int var_4 = -172405074;
signed char var_5 = (signed char)48;
int var_6 = 541458983;
unsigned int var_10 = 599199514U;
int var_11 = -368396503;
int zero = 0;
unsigned char var_15 = (unsigned char)97;
int var_16 = 442567324;
short var_17 = (short)7674;
signed char var_18 = (signed char)89;
unsigned long long int var_19 = 14275803359586465674ULL;
unsigned char var_20 = (unsigned char)67;
short var_21 = (short)-13510;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned long long int arr_5 [20] [20] ;
_Bool arr_6 [20] ;
unsigned long long int arr_8 [16] ;
signed char arr_9 [16] ;
unsigned long long int arr_3 [24] [24] ;
signed char arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 15817034263278614715ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 841073059913020144ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 12062985099123349328ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 9510182331022948030ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 12952307684301161867ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (signed char)19;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
