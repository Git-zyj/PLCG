#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31978;
short var_1 = (short)-25647;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6374525783100229207LL;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 1103384109U;
unsigned int var_11 = 3848608727U;
short var_13 = (short)-15455;
unsigned short var_14 = (unsigned short)24602;
unsigned int var_15 = 1435049887U;
long long int var_16 = -2928001663821412721LL;
long long int var_18 = 6088866804173393766LL;
int zero = 0;
unsigned short var_20 = (unsigned short)52037;
long long int var_21 = 4962996205586353099LL;
signed char var_22 = (signed char)35;
unsigned short var_23 = (unsigned short)63621;
long long int var_24 = -7000267604193675869LL;
unsigned int var_25 = 1988148663U;
_Bool var_26 = (_Bool)1;
long long int var_27 = -7152943350705430199LL;
short var_28 = (short)-7483;
signed char var_29 = (signed char)-121;
signed char var_30 = (signed char)-126;
long long int var_31 = -1143169252624634385LL;
_Bool var_32 = (_Bool)0;
unsigned int arr_0 [20] ;
long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
signed char arr_5 [10] [10] ;
long long int arr_7 [14] ;
unsigned short arr_9 [14] ;
unsigned long long int arr_14 [14] [14] ;
unsigned short arr_3 [20] ;
signed char arr_6 [10] ;
_Bool arr_12 [14] [14] [14] ;
short arr_21 [14] ;
long long int arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1653160876U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 8115936166315249169LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 14040198137978520304ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -132207687198077451LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)49802;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 12494125981852589152ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)44923;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (short)1142;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = -1558600671067717246LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
