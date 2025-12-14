#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4181244412U;
short var_2 = (short)-32602;
unsigned long long int var_3 = 14005795782503877400ULL;
unsigned short var_4 = (unsigned short)21568;
unsigned int var_5 = 1355440748U;
short var_6 = (short)20454;
short var_7 = (short)2993;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-13284;
signed char var_10 = (signed char)54;
unsigned int var_11 = 689965049U;
signed char var_13 = (signed char)-41;
unsigned int var_14 = 776503301U;
short var_15 = (short)-27122;
int zero = 0;
unsigned char var_16 = (unsigned char)95;
int var_17 = 1057202393;
short var_18 = (short)15311;
unsigned char var_19 = (unsigned char)177;
short var_20 = (short)-22526;
short var_21 = (short)-557;
unsigned short var_22 = (unsigned short)21665;
short var_23 = (short)-1464;
short arr_0 [18] [18] ;
unsigned int arr_1 [18] [18] ;
int arr_2 [18] [18] ;
unsigned long long int arr_3 [19] ;
short arr_4 [19] [19] ;
unsigned int arr_5 [19] [19] ;
unsigned int arr_6 [19] ;
_Bool arr_7 [19] [19] ;
int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-6314;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 3865424194U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -1416848106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 7997005356120789167ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-18316;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3097360456U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 3429201460U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 478805923;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
