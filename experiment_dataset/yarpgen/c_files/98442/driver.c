#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)32;
_Bool var_6 = (_Bool)1;
int var_7 = 1548890575;
unsigned int var_8 = 3835633172U;
_Bool var_10 = (_Bool)1;
short var_12 = (short)4901;
unsigned long long int var_14 = 6012894921136751352ULL;
long long int var_15 = 2899267860851690794LL;
unsigned long long int var_17 = 7784331211393558736ULL;
unsigned short var_18 = (unsigned short)13641;
signed char var_19 = (signed char)-65;
int zero = 0;
short var_20 = (short)5582;
signed char var_21 = (signed char)96;
_Bool var_22 = (_Bool)0;
short var_23 = (short)22563;
unsigned char var_24 = (unsigned char)176;
unsigned int arr_2 [19] [19] ;
int arr_3 [19] ;
int arr_16 [23] [23] [23] ;
unsigned short arr_4 [19] [19] ;
unsigned short arr_9 [19] ;
unsigned int arr_10 [19] [19] ;
unsigned char arr_18 [23] [23] [23] ;
unsigned long long int arr_19 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 2249322930U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1393864614;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -973221430;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)29839;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)7934;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 2711667507U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 9715833598324672607ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
