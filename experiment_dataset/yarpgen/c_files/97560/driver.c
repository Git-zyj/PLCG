#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3173914787627092265ULL;
unsigned short var_1 = (unsigned short)3065;
long long int var_3 = -1973718285064255400LL;
signed char var_4 = (signed char)-78;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-12760;
unsigned char var_7 = (unsigned char)186;
unsigned char var_8 = (unsigned char)91;
unsigned char var_9 = (unsigned char)71;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2467149548929225554LL;
unsigned long long int var_15 = 11731571969325636729ULL;
unsigned int var_16 = 2006322957U;
unsigned char var_17 = (unsigned char)28;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 1555511656;
unsigned int var_20 = 1912491777U;
long long int var_21 = -4792522590301104528LL;
unsigned char var_22 = (unsigned char)161;
short arr_0 [24] ;
signed char arr_1 [24] [24] ;
signed char arr_2 [24] [24] ;
int arr_3 [24] ;
short arr_4 [24] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
unsigned int arr_8 [23] [23] ;
long long int arr_10 [23] ;
unsigned char arr_13 [23] [23] [23] ;
signed char arr_15 [23] ;
short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)21511;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1478576835;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)3702;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 5877471565351154654ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 5659395667679214482ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 1758560625U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -922332033740341571LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)-26047;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
