#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4338819536976069861LL;
unsigned int var_8 = 2584796128U;
int var_9 = 2056535005;
unsigned short var_10 = (unsigned short)16799;
signed char var_11 = (signed char)56;
int var_12 = 430505378;
int zero = 0;
unsigned short var_18 = (unsigned short)56919;
int var_19 = -2012317390;
signed char var_20 = (signed char)100;
int var_21 = 1055553499;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-2592;
short var_24 = (short)-2289;
signed char var_25 = (signed char)-120;
unsigned int var_26 = 540343989U;
int var_27 = -1857741719;
unsigned short var_28 = (unsigned short)3843;
short arr_0 [18] ;
signed char arr_1 [18] [18] ;
unsigned int arr_3 [18] [18] [18] ;
short arr_4 [18] ;
signed char arr_5 [18] [18] ;
int arr_9 [18] [18] [18] [18] [18] ;
unsigned long long int arr_12 [14] ;
_Bool arr_17 [20] ;
unsigned short arr_18 [20] [20] ;
short arr_2 [18] ;
unsigned long long int arr_15 [14] ;
signed char arr_16 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3344686797U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)30408;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -172898714;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 12922923945784154191ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)64397;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)2083;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3788752271666175212ULL : 97063094945312813ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)87;
}

void checksum() {
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
