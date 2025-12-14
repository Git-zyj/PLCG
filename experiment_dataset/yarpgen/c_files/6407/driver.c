#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2974649526731218157ULL;
long long int var_1 = -8361539751398086540LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 2505781610305385043ULL;
short var_4 = (short)14446;
unsigned char var_5 = (unsigned char)217;
long long int var_6 = 3888507459596078118LL;
short var_7 = (short)-5721;
unsigned char var_8 = (unsigned char)65;
signed char var_9 = (signed char)-113;
signed char var_11 = (signed char)-24;
long long int var_12 = 975978392582644043LL;
short var_13 = (short)807;
unsigned char var_14 = (unsigned char)113;
int zero = 0;
long long int var_15 = 509092775450878084LL;
unsigned long long int var_16 = 15978916575758739558ULL;
long long int var_17 = 4878555172119683741LL;
signed char var_18 = (signed char)-115;
unsigned long long int var_19 = 4960608419873488955ULL;
int var_20 = -653111554;
unsigned short arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
short arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
long long int arr_4 [11] [11] ;
signed char arr_5 [11] ;
_Bool arr_7 [11] ;
unsigned char arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)12925;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2365381519U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)564;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1442947864U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3893143725487754749LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)135;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
