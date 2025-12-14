#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -603623978;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13150134148096597312ULL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-77;
long long int var_5 = 3621942481143541579LL;
signed char var_6 = (signed char)-108;
unsigned char var_7 = (unsigned char)173;
unsigned short var_8 = (unsigned short)59003;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 389732167;
unsigned char var_11 = (unsigned char)169;
signed char var_12 = (signed char)22;
short var_13 = (short)-14263;
short arr_0 [23] [23] ;
_Bool arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned char arr_5 [23] [23] ;
short arr_6 [23] ;
unsigned char arr_11 [20] ;
long long int arr_12 [20] ;
int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-27877;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 3575129828226357494LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)2039 : (short)6629;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -8414227341894739357LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = -1234526219;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
