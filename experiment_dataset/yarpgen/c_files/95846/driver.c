#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1970992150U;
unsigned char var_1 = (unsigned char)118;
unsigned int var_3 = 3640786478U;
unsigned long long int var_4 = 670612193587041236ULL;
int var_7 = 1249875730;
unsigned char var_8 = (unsigned char)247;
unsigned short var_10 = (unsigned short)12326;
int zero = 0;
short var_14 = (short)27779;
unsigned short var_15 = (unsigned short)54165;
short var_16 = (short)-32210;
unsigned short var_17 = (unsigned short)62206;
unsigned char var_18 = (unsigned char)176;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)86;
unsigned short var_21 = (unsigned short)57975;
unsigned short var_22 = (unsigned short)48026;
long long int var_23 = -447682304222653408LL;
unsigned short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
unsigned long long int arr_3 [20] ;
long long int arr_4 [20] ;
unsigned short arr_6 [20] ;
_Bool arr_2 [24] ;
unsigned short arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43448 : (unsigned short)22925;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 258889416U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 9697370126403107883ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -1330686683761805061LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)23004;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30273 : (unsigned short)41138;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
