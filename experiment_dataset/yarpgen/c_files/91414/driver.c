#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32029;
int var_2 = -780959616;
unsigned short var_5 = (unsigned short)49883;
long long int var_6 = 4865667688701354141LL;
int var_7 = 1508748089;
short var_8 = (short)-19787;
long long int var_9 = 1963666008352176793LL;
int var_14 = 1678841700;
int var_17 = -794967625;
int zero = 0;
int var_18 = -841168221;
long long int var_19 = 7728734075386125382LL;
signed char var_20 = (signed char)-118;
int var_21 = -1498858570;
unsigned int var_22 = 1357682547U;
signed char var_23 = (signed char)37;
int var_24 = 635089766;
int arr_0 [18] ;
unsigned short arr_1 [18] [18] ;
long long int arr_2 [18] ;
signed char arr_4 [18] [18] ;
long long int arr_5 [18] ;
int arr_8 [12] ;
int arr_3 [18] [18] ;
long long int arr_6 [18] [18] ;
long long int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 66115565;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59311;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2590313568534339735LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -3099757783963338151LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 122283052;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 9415362;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -382767004901087144LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = -5130280950765488806LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
