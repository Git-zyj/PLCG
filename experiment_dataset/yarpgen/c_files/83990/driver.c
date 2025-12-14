#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1785944701;
unsigned short var_1 = (unsigned short)531;
unsigned short var_2 = (unsigned short)23778;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-28180;
unsigned long long int var_5 = 11607871898136147720ULL;
unsigned int var_6 = 346119040U;
unsigned short var_8 = (unsigned short)23081;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2680842408842697347LL;
unsigned short var_14 = (unsigned short)27103;
unsigned long long int var_15 = 9624673148374838515ULL;
unsigned long long int var_16 = 13424433234623189413ULL;
unsigned int var_17 = 4010978627U;
unsigned short var_18 = (unsigned short)37067;
short var_19 = (short)23326;
unsigned long long int arr_1 [11] [11] ;
unsigned int arr_3 [18] ;
_Bool arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
unsigned short arr_7 [18] [18] ;
unsigned short arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 13303505433688788096ULL : 2960702650310026250ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 377982351U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)63830;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)16022;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)17556;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)53853;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
