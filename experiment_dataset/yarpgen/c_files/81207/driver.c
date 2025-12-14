#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4130401865607731737ULL;
int var_2 = -964384786;
unsigned short var_3 = (unsigned short)58089;
short var_7 = (short)5237;
unsigned long long int var_11 = 16222509389130517431ULL;
unsigned short var_13 = (unsigned short)62143;
unsigned short var_14 = (unsigned short)27649;
unsigned long long int var_16 = 8028485155146238662ULL;
unsigned long long int var_18 = 9847648233118057541ULL;
int zero = 0;
int var_19 = 1113315029;
signed char var_20 = (signed char)-22;
signed char var_21 = (signed char)-11;
unsigned long long int var_22 = 3958064352808147005ULL;
unsigned int var_23 = 3314136598U;
unsigned short arr_2 [25] ;
signed char arr_6 [25] [25] ;
short arr_7 [25] [25] ;
unsigned int arr_8 [25] [25] [25] ;
long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42116 : (unsigned short)56186;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-24 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)18470 : (short)15216;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1709410295U : 444330039U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7560994652384207219LL : -4901204056037030375LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
