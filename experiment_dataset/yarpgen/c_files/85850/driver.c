#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)14791;
unsigned short var_9 = (unsigned short)3082;
unsigned char var_12 = (unsigned char)216;
_Bool var_13 = (_Bool)0;
int var_14 = 889591544;
signed char var_18 = (signed char)-86;
unsigned char var_19 = (unsigned char)72;
int zero = 0;
short var_20 = (short)23117;
unsigned long long int var_21 = 10242022640655935ULL;
unsigned int var_22 = 1892522972U;
unsigned char var_23 = (unsigned char)47;
unsigned long long int var_24 = 12078836726438321483ULL;
short var_25 = (short)-15564;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2069202194U;
unsigned short var_28 = (unsigned short)47210;
int var_29 = -903285760;
unsigned short var_30 = (unsigned short)40757;
unsigned char var_31 = (unsigned char)14;
unsigned long long int var_32 = 7512213481865772054ULL;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)49286;
_Bool var_35 = (_Bool)1;
_Bool arr_0 [10] ;
int arr_1 [10] ;
unsigned char arr_2 [10] ;
_Bool arr_5 [10] [10] ;
unsigned short arr_6 [11] ;
unsigned int arr_8 [24] ;
unsigned int arr_9 [24] [24] ;
short arr_12 [21] [21] ;
_Bool arr_15 [21] [21] [21] ;
unsigned long long int arr_17 [21] [21] ;
_Bool arr_18 [21] [21] [21] [21] [21] [21] ;
int arr_10 [24] ;
unsigned char arr_21 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 555520456;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)46708;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 384633460U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 2312256105U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)16773 : (short)-5887;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 9828124163631579426ULL : 5668511124927013815ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1234062817;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)188 : (unsigned char)38;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
