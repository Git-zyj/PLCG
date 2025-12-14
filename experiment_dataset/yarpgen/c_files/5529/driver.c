#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1570826450;
unsigned long long int var_7 = 9487530945208202223ULL;
unsigned int var_8 = 2991600508U;
unsigned long long int var_11 = 12385735315247416280ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1460548284U;
unsigned long long int var_14 = 92377978216092743ULL;
unsigned long long int var_15 = 765486754944805906ULL;
int var_16 = -279753732;
unsigned long long int arr_1 [23] ;
unsigned int arr_3 [23] ;
int arr_4 [23] [23] ;
long long int arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 16791887819655024184ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2189593232U : 852967378U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -943446771;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = -7757869073113553702LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
