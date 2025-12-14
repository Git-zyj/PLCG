#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2786982473U;
unsigned short var_1 = (unsigned short)10027;
unsigned long long int var_2 = 15368867806699701796ULL;
long long int var_4 = 270663703496133948LL;
unsigned int var_6 = 835041508U;
unsigned char var_8 = (unsigned char)64;
int zero = 0;
signed char var_10 = (signed char)30;
unsigned int var_11 = 2255906431U;
unsigned short var_12 = (unsigned short)6616;
unsigned long long int var_13 = 18188061016990108375ULL;
int var_14 = 655450847;
unsigned short arr_1 [23] ;
unsigned int arr_4 [23] [23] ;
_Bool arr_5 [23] [23] ;
unsigned char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)10335;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 3756482346U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
