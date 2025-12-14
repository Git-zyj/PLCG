#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1778286242;
unsigned short var_5 = (unsigned short)42269;
int var_6 = -874144467;
unsigned int var_8 = 4248076425U;
signed char var_11 = (signed char)36;
int zero = 0;
short var_13 = (short)-4556;
unsigned short var_14 = (unsigned short)31272;
long long int arr_0 [23] [23] ;
signed char arr_1 [23] ;
unsigned short arr_3 [23] [23] ;
unsigned char arr_4 [23] ;
int arr_5 [23] ;
short arr_8 [23] ;
_Bool arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -370219866464824057LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)55697;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1573319423;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-29231;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
