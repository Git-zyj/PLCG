#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)207;
short var_4 = (short)27461;
unsigned int var_5 = 62442230U;
unsigned int var_6 = 2105033261U;
short var_8 = (short)11835;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 319287235U;
unsigned char var_12 = (unsigned char)218;
unsigned char var_13 = (unsigned char)77;
short var_14 = (short)1818;
unsigned char var_15 = (unsigned char)136;
short var_16 = (short)-14510;
unsigned long long int var_17 = 10666333757432352524ULL;
unsigned char arr_0 [23] ;
long long int arr_2 [23] [23] ;
long long int arr_7 [23] [23] [23] ;
unsigned int arr_8 [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] [23] [23] ;
int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 2423459184464757610LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6493405959353578849LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 4031312781U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7911098881815722857ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 658944455 : 528991311;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
