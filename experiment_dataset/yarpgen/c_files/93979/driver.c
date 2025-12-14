#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15280687269962847325ULL;
int var_1 = 1600310094;
signed char var_5 = (signed char)-93;
unsigned long long int var_9 = 10392152704527476442ULL;
unsigned char var_10 = (unsigned char)0;
unsigned int var_11 = 2301498305U;
unsigned char var_13 = (unsigned char)118;
signed char var_17 = (signed char)113;
unsigned int var_18 = 2013908388U;
unsigned long long int var_19 = 2904599234729179718ULL;
int zero = 0;
unsigned int var_20 = 3317803679U;
signed char var_21 = (signed char)127;
unsigned long long int var_22 = 17572133938255009224ULL;
short var_23 = (short)158;
unsigned char var_24 = (unsigned char)212;
unsigned int var_25 = 2768227420U;
long long int var_26 = 7120173161850779578LL;
signed char arr_0 [13] [13] ;
int arr_1 [13] ;
signed char arr_6 [13] [13] [13] [13] ;
_Bool arr_7 [13] ;
long long int arr_8 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)115 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 112289828;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6205681639407712572LL : 6447239829666147238LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
