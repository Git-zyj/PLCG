#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34602;
_Bool var_2 = (_Bool)0;
int var_3 = 1391966031;
unsigned char var_4 = (unsigned char)173;
unsigned char var_5 = (unsigned char)28;
int var_7 = -363002025;
unsigned char var_9 = (unsigned char)195;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)70;
int var_12 = 308303233;
int var_13 = 1769697558;
unsigned char var_15 = (unsigned char)238;
short var_16 = (short)-13812;
int zero = 0;
int var_17 = -2100564085;
signed char var_18 = (signed char)54;
signed char arr_6 [23] ;
_Bool arr_7 [23] ;
unsigned int arr_5 [10] [10] [10] ;
unsigned short arr_8 [23] [23] ;
unsigned char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 958566929U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)45197;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)255;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
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
