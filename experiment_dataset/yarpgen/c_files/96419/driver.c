#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned char var_1 = (unsigned char)12;
unsigned short var_2 = (unsigned short)1692;
int var_3 = 314943177;
unsigned char var_5 = (unsigned char)68;
unsigned short var_6 = (unsigned short)14306;
short var_8 = (short)15601;
unsigned int var_9 = 3998144173U;
int zero = 0;
unsigned int var_13 = 695127908U;
unsigned char var_14 = (unsigned char)7;
unsigned long long int var_15 = 13823848458841091866ULL;
unsigned int var_16 = 4189731763U;
int var_17 = 522309939;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16176384762885450191ULL;
unsigned int arr_2 [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned int arr_5 [23] [23] ;
long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3783191675U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2534201629U : 120155646U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2597351912919934102LL : 7966124829469152336LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
