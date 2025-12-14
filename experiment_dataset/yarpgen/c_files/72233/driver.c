#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)140;
unsigned char var_3 = (unsigned char)111;
signed char var_4 = (signed char)-39;
unsigned long long int var_5 = 12553943201842727198ULL;
unsigned int var_6 = 879549546U;
signed char var_8 = (signed char)46;
unsigned char var_9 = (unsigned char)214;
unsigned short var_10 = (unsigned short)11405;
unsigned char var_14 = (unsigned char)226;
short var_17 = (short)-26678;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
unsigned int var_19 = 3920868615U;
int var_20 = -590393789;
short var_21 = (short)16664;
unsigned int var_22 = 2089723974U;
unsigned short var_23 = (unsigned short)28583;
short var_24 = (short)-29818;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-91;
unsigned char var_27 = (unsigned char)28;
long long int var_28 = 2528186525599796324LL;
unsigned short var_29 = (unsigned short)12902;
unsigned char var_30 = (unsigned char)206;
unsigned short var_31 = (unsigned short)29211;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)45646;
short var_34 = (short)-12563;
unsigned char var_35 = (unsigned char)101;
unsigned char var_36 = (unsigned char)247;
unsigned long long int var_37 = 7197742323523162801ULL;
int var_38 = 702248940;
long long int var_39 = 4109615407800679019LL;
unsigned long long int var_40 = 1656337810186056119ULL;
signed char var_41 = (signed char)-24;
short arr_1 [13] [13] ;
signed char arr_3 [13] [13] ;
unsigned short arr_4 [13] ;
_Bool arr_9 [13] [13] [13] ;
unsigned char arr_15 [13] [13] [13] [13] ;
unsigned char arr_23 [23] [23] ;
unsigned char arr_24 [23] ;
unsigned short arr_26 [23] [23] [23] ;
unsigned long long int arr_29 [23] [23] [23] [23] ;
unsigned long long int arr_31 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-18511;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)10619;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)159 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)11177;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6533943040501767188ULL : 2374359966732915473ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 4165507740105335297ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
