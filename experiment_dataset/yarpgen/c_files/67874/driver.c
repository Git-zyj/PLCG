#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62465;
unsigned int var_3 = 1163800511U;
unsigned short var_5 = (unsigned short)50915;
unsigned char var_6 = (unsigned char)76;
unsigned long long int var_8 = 18051841623094450056ULL;
unsigned char var_9 = (unsigned char)68;
unsigned long long int var_10 = 12657660014386565892ULL;
unsigned long long int var_11 = 11719602727153356104ULL;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)33;
unsigned int var_15 = 414985190U;
int zero = 0;
unsigned char var_16 = (unsigned char)130;
signed char var_17 = (signed char)117;
signed char var_18 = (signed char)-7;
signed char var_19 = (signed char)32;
unsigned char var_20 = (unsigned char)78;
unsigned short var_21 = (unsigned short)35938;
unsigned int var_22 = 1838114312U;
unsigned short var_23 = (unsigned short)46821;
unsigned char var_24 = (unsigned char)243;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)42130;
_Bool arr_5 [22] [22] [22] ;
unsigned short arr_6 [22] ;
unsigned char arr_18 [24] [24] [24] [24] ;
unsigned short arr_19 [24] ;
unsigned short arr_22 [24] ;
signed char arr_25 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)15178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58981 : (unsigned short)43544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (unsigned short)13835;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (signed char)17;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
