#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 286531074U;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-11094;
unsigned char var_7 = (unsigned char)12;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)19885;
short var_11 = (short)-22738;
unsigned short var_12 = (unsigned short)9669;
unsigned char var_13 = (unsigned char)207;
int zero = 0;
short var_14 = (short)20912;
unsigned short var_15 = (unsigned short)48840;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13644075174578756908ULL;
unsigned char var_19 = (unsigned char)117;
unsigned short var_20 = (unsigned short)1415;
unsigned int var_21 = 3600741622U;
short var_22 = (short)-28096;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned short arr_0 [15] ;
unsigned char arr_3 [20] [20] ;
_Bool arr_8 [20] [20] ;
unsigned int arr_12 [22] ;
_Bool arr_13 [22] ;
unsigned short arr_4 [20] [20] ;
unsigned int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)50384;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 3766927U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)22778;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 2763239381U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
