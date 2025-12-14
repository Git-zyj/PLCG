#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -969774488;
int var_1 = 348999397;
unsigned short var_2 = (unsigned short)9105;
unsigned int var_3 = 3436364478U;
signed char var_4 = (signed char)13;
int var_5 = -525944442;
unsigned int var_6 = 1044668908U;
unsigned short var_7 = (unsigned short)60360;
short var_9 = (short)29285;
unsigned long long int var_10 = 12095946925539666548ULL;
short var_11 = (short)10739;
int zero = 0;
unsigned char var_12 = (unsigned char)55;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-16971;
short var_16 = (short)31410;
int var_17 = 1931402838;
long long int var_18 = -4750554081654995400LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 3989894609438734883ULL;
unsigned short var_21 = (unsigned short)21648;
short var_22 = (short)-32451;
_Bool var_23 = (_Bool)1;
int var_24 = -337491035;
signed char var_25 = (signed char)-36;
short var_26 = (short)18798;
_Bool var_27 = (_Bool)1;
unsigned char arr_0 [25] ;
int arr_1 [25] ;
_Bool arr_2 [25] [25] ;
unsigned char arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned int arr_5 [18] ;
unsigned int arr_6 [18] [18] ;
unsigned int arr_14 [21] [21] ;
unsigned int arr_8 [18] ;
unsigned int arr_9 [18] ;
unsigned char arr_10 [18] ;
unsigned int arr_18 [12] ;
unsigned short arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 779693284;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)34896;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 23396831U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 2081971735U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 1205547257U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 3632942644U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 1742695677U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 1362215834U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned short)53713;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
