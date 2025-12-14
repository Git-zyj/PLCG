#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32476;
unsigned char var_2 = (unsigned char)135;
unsigned int var_3 = 785927450U;
unsigned long long int var_6 = 3274639597503115514ULL;
short var_7 = (short)-27645;
unsigned long long int var_9 = 15141382021838212818ULL;
unsigned int var_10 = 1349693135U;
unsigned long long int var_11 = 5287008110142718287ULL;
int zero = 0;
int var_12 = -1864325713;
unsigned long long int var_13 = 4034465013334593676ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2330310417U;
signed char var_16 = (signed char)-16;
signed char var_17 = (signed char)-94;
unsigned long long int var_18 = 13823599636098521491ULL;
signed char var_19 = (signed char)-50;
unsigned long long int arr_0 [21] ;
signed char arr_3 [22] ;
unsigned short arr_4 [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] ;
unsigned short arr_5 [22] ;
int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8612020131222517526ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)58350;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 3865952691667407017ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)148 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)47860;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1315872742 : -908196009;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
