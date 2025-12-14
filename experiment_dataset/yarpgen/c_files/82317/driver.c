#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = 1256383852;
unsigned int var_7 = 490521471U;
long long int var_10 = 5588872891499898756LL;
unsigned short var_11 = (unsigned short)61490;
short var_13 = (short)-10417;
int zero = 0;
signed char var_14 = (signed char)-96;
unsigned int var_15 = 1828009631U;
signed char var_16 = (signed char)-29;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-12305;
unsigned long long int var_19 = 6342405043980325875ULL;
unsigned short var_20 = (unsigned short)15584;
unsigned int var_21 = 2348232575U;
long long int var_22 = 5597961613425104304LL;
unsigned char var_23 = (unsigned char)72;
unsigned short var_24 = (unsigned short)12549;
unsigned short arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned short arr_5 [14] ;
unsigned short arr_7 [16] ;
unsigned short arr_8 [16] [16] ;
unsigned long long int arr_12 [16] [16] [16] [16] ;
short arr_13 [16] [16] [16] [16] ;
long long int arr_2 [19] [19] ;
unsigned char arr_3 [19] [19] ;
long long int arr_6 [14] ;
int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45299 : (unsigned short)20903;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)11056;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)8419;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)34834;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2798099279160475003ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)7059;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1569366500054537742LL : 4985823369914987939LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -6416036363868208684LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1819468665;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
