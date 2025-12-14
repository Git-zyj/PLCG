#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 132515680;
unsigned long long int var_3 = 3495342629021327736ULL;
long long int var_4 = -2805069640361713898LL;
unsigned int var_6 = 358801599U;
unsigned long long int var_9 = 18207341296613999415ULL;
int var_12 = 1509226630;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6389057369173948262ULL;
long long int var_17 = -885771088101571417LL;
signed char var_18 = (signed char)56;
_Bool var_19 = (_Bool)0;
unsigned long long int arr_0 [19] ;
_Bool arr_1 [19] [19] ;
unsigned int arr_2 [19] [19] ;
_Bool arr_6 [19] ;
unsigned int arr_9 [12] [12] ;
_Bool arr_10 [12] ;
unsigned int arr_11 [12] ;
unsigned int arr_12 [12] ;
unsigned long long int arr_7 [19] ;
int arr_14 [12] [12] ;
int arr_15 [12] [12] [12] ;
unsigned char arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 13033256069894936140ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3037195287U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 2049821883U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 757016606U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 3710007397U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 12746358842475419536ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = -330496925;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2137368287;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)33;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
