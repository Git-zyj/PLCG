#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned short var_5 = (unsigned short)48181;
signed char var_7 = (signed char)123;
unsigned char var_9 = (unsigned char)105;
unsigned int var_11 = 1482117100U;
unsigned long long int var_12 = 8145295752495519285ULL;
long long int var_13 = -5177571705803147250LL;
int zero = 0;
unsigned short var_14 = (unsigned short)6508;
unsigned long long int var_15 = 4094870621794145066ULL;
unsigned long long int var_16 = 14912374614599816820ULL;
int var_17 = 1160660618;
int var_18 = 1421133419;
short var_19 = (short)-20442;
unsigned int var_20 = 4265658950U;
unsigned int var_21 = 2499947763U;
unsigned int var_22 = 2544218027U;
unsigned char var_23 = (unsigned char)77;
short var_24 = (short)-7987;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
long long int arr_2 [20] [20] [20] ;
unsigned char arr_3 [20] ;
unsigned int arr_4 [20] [20] [20] ;
int arr_5 [20] [20] ;
unsigned short arr_8 [13] ;
unsigned short arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 13225948529649613396ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 12360463380994945738ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -3531022360793957216LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4219240415U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -624811091;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48132 : (unsigned short)38677;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)63514;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
