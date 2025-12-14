#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
signed char var_2 = (signed char)45;
long long int var_3 = -3716092879232811664LL;
int var_4 = 1500960965;
int var_5 = 1813451698;
unsigned int var_6 = 2149267631U;
signed char var_7 = (signed char)-14;
int zero = 0;
int var_10 = 498175195;
unsigned int var_11 = 160989470U;
unsigned int var_12 = 164214364U;
unsigned short var_13 = (unsigned short)40906;
long long int var_14 = -1870089816672449196LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)61790;
unsigned short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned short arr_3 [20] ;
long long int arr_4 [20] ;
_Bool arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)31850;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)56583;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)42260;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -2117067241864747907LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
