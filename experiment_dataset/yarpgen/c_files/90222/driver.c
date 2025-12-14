#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7404412112595609086ULL;
unsigned int var_2 = 4225694340U;
unsigned short var_3 = (unsigned short)55452;
int var_4 = 230052036;
int var_5 = 1403212176;
long long int var_6 = 2985610304326821761LL;
short var_8 = (short)-9212;
signed char var_9 = (signed char)64;
unsigned long long int var_10 = 2653522716673342928ULL;
signed char var_11 = (signed char)-86;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)54;
unsigned char var_15 = (unsigned char)52;
unsigned char var_16 = (unsigned char)91;
unsigned char var_17 = (unsigned char)198;
long long int var_18 = 5536986295013551944LL;
unsigned char var_19 = (unsigned char)226;
unsigned char var_20 = (unsigned char)16;
unsigned long long int arr_0 [12] ;
unsigned int arr_2 [12] ;
int arr_6 [23] ;
unsigned char arr_8 [23] ;
short arr_9 [23] [23] ;
unsigned int arr_4 [12] ;
unsigned short arr_5 [12] [12] ;
unsigned int arr_11 [23] ;
unsigned long long int arr_15 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3044290582833549996ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1364184347U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 774902442;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-2436;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1435966120U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)26839;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1753140386U : 1769551754U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 11454498150783419300ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
