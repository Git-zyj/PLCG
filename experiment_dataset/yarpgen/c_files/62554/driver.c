#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 260383287;
long long int var_2 = 5457633856473197260LL;
unsigned short var_3 = (unsigned short)3661;
signed char var_4 = (signed char)-92;
unsigned long long int var_5 = 11109611828406525526ULL;
unsigned short var_6 = (unsigned short)36517;
unsigned short var_10 = (unsigned short)24678;
unsigned char var_12 = (unsigned char)73;
int zero = 0;
unsigned long long int var_17 = 16258996642396084334ULL;
unsigned int var_18 = 2213681175U;
unsigned short var_19 = (unsigned short)31079;
unsigned short var_20 = (unsigned short)30009;
long long int var_21 = -5086167189436287711LL;
unsigned char var_22 = (unsigned char)220;
_Bool var_23 = (_Bool)1;
int var_24 = -397033930;
unsigned int var_25 = 2134719511U;
unsigned short var_26 = (unsigned short)40470;
signed char var_27 = (signed char)-12;
unsigned long long int var_28 = 15170975342326186747ULL;
signed char var_29 = (signed char)76;
unsigned int var_30 = 2163712620U;
unsigned char var_31 = (unsigned char)56;
unsigned short var_32 = (unsigned short)2577;
int var_33 = -661076265;
unsigned int var_34 = 2883297261U;
unsigned char var_35 = (unsigned char)196;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
unsigned int var_38 = 3852347530U;
long long int var_39 = -1681160581045621040LL;
unsigned short var_40 = (unsigned short)22601;
unsigned long long int var_41 = 12971235788647238524ULL;
_Bool arr_2 [18] ;
_Bool arr_4 [18] [18] [18] ;
_Bool arr_9 [23] [23] ;
unsigned short arr_10 [23] ;
short arr_11 [23] ;
long long int arr_12 [23] ;
_Bool arr_13 [23] ;
_Bool arr_18 [23] [23] [23] [23] ;
unsigned char arr_20 [22] ;
_Bool arr_24 [22] [22] ;
unsigned char arr_25 [22] [22] [22] [22] ;
long long int arr_29 [22] [22] [22] [22] ;
unsigned char arr_30 [22] [22] [22] [22] ;
unsigned short arr_31 [22] [22] [22] ;
short arr_33 [22] ;
signed char arr_36 [22] [22] [22] [22] [22] ;
_Bool arr_39 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)18721;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (short)24040;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 4147087821398900395LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)157 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -5278027464360443129LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)197 : (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)57942;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (short)-21984;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
