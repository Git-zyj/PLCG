#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -844902517;
signed char var_1 = (signed char)-70;
unsigned long long int var_2 = 16785628665767986094ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6182673161473408041LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -6762439452426848633LL;
int var_10 = -503638327;
int zero = 0;
long long int var_15 = 6547254512914116595LL;
unsigned long long int var_16 = 442447044765214158ULL;
unsigned long long int var_17 = 6886421415568958436ULL;
long long int var_18 = 5784865298129168552LL;
int var_19 = 1405236993;
signed char var_20 = (signed char)78;
signed char arr_0 [10] ;
short arr_1 [10] ;
signed char arr_2 [10] ;
_Bool arr_3 [10] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)9785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-27428 : (short)7542;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
