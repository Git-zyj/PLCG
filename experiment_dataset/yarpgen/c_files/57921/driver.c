#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)58;
long long int var_4 = -1916322460438301901LL;
signed char var_6 = (signed char)-124;
unsigned long long int var_7 = 15355419121785151892ULL;
short var_8 = (short)16728;
unsigned short var_10 = (unsigned short)12883;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)14272;
unsigned long long int var_14 = 4866547257344481260ULL;
int zero = 0;
short var_15 = (short)-16269;
unsigned int var_16 = 1041200819U;
_Bool var_17 = (_Bool)1;
int var_18 = 555801723;
signed char var_19 = (signed char)-48;
int var_20 = -1959593258;
unsigned int var_21 = 3086161783U;
unsigned int var_22 = 137682654U;
long long int var_23 = -7944178418265491580LL;
unsigned int var_24 = 472958436U;
short var_25 = (short)-16692;
unsigned int var_26 = 2263397816U;
signed char var_27 = (signed char)74;
unsigned int arr_0 [23] ;
signed char arr_2 [23] [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
unsigned char arr_16 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3673746152U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17790211503353353277ULL : 16129718506989444071ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14747570272724349132ULL : 13852264513238805979ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)30;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
