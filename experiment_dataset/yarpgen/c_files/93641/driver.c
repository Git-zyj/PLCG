#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21964;
unsigned int var_2 = 3829184901U;
unsigned long long int var_4 = 8803116633301175840ULL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)21719;
signed char var_8 = (signed char)-100;
int var_10 = 219039457;
long long int var_11 = -1103349756814221742LL;
unsigned char var_12 = (unsigned char)2;
int var_15 = 1440025120;
unsigned char var_16 = (unsigned char)57;
long long int var_17 = 1801126651997799686LL;
unsigned short var_18 = (unsigned short)8374;
int zero = 0;
long long int var_20 = 5503601214109047660LL;
long long int var_21 = 4118548566639647510LL;
unsigned char var_22 = (unsigned char)34;
unsigned char var_23 = (unsigned char)224;
long long int var_24 = 2495269548399359284LL;
_Bool var_25 = (_Bool)1;
long long int var_26 = -5961296344423482652LL;
long long int var_27 = 7422098126480265048LL;
long long int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
short arr_2 [23] ;
_Bool arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] ;
short arr_5 [23] [23] [23] [23] ;
short arr_9 [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] ;
unsigned long long int arr_17 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3106308787409918183LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 12855993927088019442ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-9999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 3308771745681156537ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)32427;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29480 : (short)19002;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14582130279230438566ULL : 12740346019413397896ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = 4628464092932164309ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
