#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8587530772270810369ULL;
long long int var_6 = 1077750252857274794LL;
signed char var_8 = (signed char)-52;
_Bool var_11 = (_Bool)0;
long long int var_12 = 9022360667836877743LL;
unsigned long long int var_15 = 15916117973053040545ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)28346;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)5;
unsigned short var_21 = (unsigned short)42257;
signed char var_22 = (signed char)0;
unsigned char var_23 = (unsigned char)43;
unsigned long long int var_24 = 1534035096910273677ULL;
unsigned short arr_0 [20] ;
unsigned short arr_6 [20] [20] ;
unsigned long long int arr_7 [20] ;
unsigned char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47962 : (unsigned short)1994;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36664 : (unsigned short)44620;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 11719101295982061457ULL : 11613566787000382871ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)55 : (unsigned char)147;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
