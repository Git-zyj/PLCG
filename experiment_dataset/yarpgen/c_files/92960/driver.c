#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
int var_2 = -875255081;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2153937450U;
long long int var_9 = -6373418631065169118LL;
long long int var_12 = 5939369372292575085LL;
int zero = 0;
signed char var_17 = (signed char)21;
unsigned int var_18 = 3833519116U;
unsigned short var_19 = (unsigned short)47859;
unsigned int var_20 = 2517411702U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-91;
unsigned int var_23 = 3798584437U;
_Bool var_24 = (_Bool)0;
int var_25 = -1898359031;
signed char arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
unsigned int arr_3 [23] ;
long long int arr_4 [23] ;
short arr_6 [13] ;
unsigned int arr_9 [13] [13] ;
short arr_11 [13] ;
short arr_12 [13] [13] [13] ;
unsigned short arr_14 [13] ;
signed char arr_15 [13] ;
unsigned int arr_2 [21] ;
unsigned short arr_5 [23] ;
_Bool arr_13 [13] [13] [13] [13] ;
unsigned int arr_17 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)63277;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3048853978U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 5664033350329682058LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-31824;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 2385620334U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)2576;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-15185;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)36746;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2362903055U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)36101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 4119195963U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
