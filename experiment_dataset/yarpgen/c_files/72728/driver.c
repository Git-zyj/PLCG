#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13618;
long long int var_1 = 7536656602598542924LL;
long long int var_2 = -5623879834597186863LL;
unsigned char var_4 = (unsigned char)255;
int var_6 = -1279142179;
unsigned int var_8 = 3521287299U;
unsigned int var_9 = 2262063741U;
unsigned char var_10 = (unsigned char)213;
short var_11 = (short)3808;
unsigned int var_12 = 3031183291U;
unsigned long long int var_15 = 6100513809674722147ULL;
short var_17 = (short)21401;
unsigned int var_19 = 1119570234U;
int zero = 0;
unsigned int var_20 = 264859451U;
int var_21 = -1456293100;
unsigned int var_22 = 4231826297U;
short var_23 = (short)-31805;
unsigned int var_24 = 140451272U;
unsigned char var_25 = (unsigned char)93;
_Bool var_26 = (_Bool)0;
_Bool arr_0 [12] [12] ;
short arr_1 [12] [12] ;
short arr_2 [12] [12] ;
_Bool arr_3 [12] [12] ;
long long int arr_4 [12] ;
unsigned int arr_5 [12] [12] [12] ;
unsigned char arr_6 [12] ;
short arr_9 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)8956;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)7592;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -2978155705330766372LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 232786730U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-11278;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
