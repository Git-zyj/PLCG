#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
unsigned short var_2 = (unsigned short)35064;
signed char var_3 = (signed char)112;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-124;
int var_7 = 85024479;
_Bool var_8 = (_Bool)0;
long long int var_10 = 2934036852041321721LL;
unsigned short var_11 = (unsigned short)30296;
unsigned long long int var_12 = 4395408893071698307ULL;
short var_13 = (short)-32681;
long long int var_14 = 6049562180594661730LL;
signed char var_15 = (signed char)-75;
long long int var_16 = -2659263399333698230LL;
signed char var_17 = (signed char)50;
int zero = 0;
signed char var_18 = (signed char)1;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5492351334772804580LL;
int var_21 = 262854504;
unsigned long long int var_22 = 14443721171838877813ULL;
unsigned char var_23 = (unsigned char)198;
long long int var_24 = -6799124493320286320LL;
unsigned long long int var_25 = 10852410799174705261ULL;
long long int var_26 = -4616809987216116696LL;
int var_27 = 1324410700;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)20010;
long long int arr_1 [16] ;
long long int arr_3 [16] ;
unsigned long long int arr_4 [16] [16] [16] ;
unsigned int arr_5 [16] [16] ;
long long int arr_6 [16] [16] [16] ;
unsigned char arr_7 [16] [16] [16] [16] ;
int arr_12 [16] [16] [16] [16] ;
_Bool arr_10 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 5077692127325763378LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -4059860868806226214LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 12147975272672795661ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 2697184754U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -7905353346722927387LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1611462154;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)30;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
