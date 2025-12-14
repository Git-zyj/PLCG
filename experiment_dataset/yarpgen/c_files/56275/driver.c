#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 816618484U;
int var_1 = -846244226;
unsigned char var_2 = (unsigned char)202;
long long int var_7 = -8668185229339801503LL;
long long int var_10 = -8881603083916913842LL;
unsigned char var_12 = (unsigned char)65;
int zero = 0;
unsigned int var_15 = 2576096611U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 638162481U;
unsigned int var_18 = 2772457941U;
unsigned char var_19 = (unsigned char)242;
unsigned int var_20 = 2705771553U;
int var_21 = 837027478;
unsigned char var_22 = (unsigned char)81;
unsigned int arr_0 [11] ;
unsigned char arr_2 [11] [11] ;
short arr_4 [13] ;
int arr_5 [13] ;
_Bool arr_6 [13] ;
unsigned int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1313974353U : 3223058556U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)31160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -610898235 : -222019501;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1368932848U : 419527030U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
