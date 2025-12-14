#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17834;
short var_1 = (short)-2228;
signed char var_2 = (signed char)-56;
signed char var_4 = (signed char)36;
unsigned long long int var_5 = 4538122843200864928ULL;
unsigned short var_6 = (unsigned short)4247;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int var_9 = -1081784257;
unsigned long long int var_10 = 1308970131831587638ULL;
unsigned short var_11 = (unsigned short)54891;
unsigned long long int var_14 = 13951713093111004462ULL;
signed char var_15 = (signed char)113;
signed char var_16 = (signed char)107;
int zero = 0;
unsigned short var_17 = (unsigned short)54299;
signed char var_18 = (signed char)111;
unsigned char var_19 = (unsigned char)51;
unsigned int var_20 = 2519625821U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)161;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)94;
unsigned short var_25 = (unsigned short)56468;
unsigned long long int var_26 = 17872581324800086519ULL;
_Bool var_27 = (_Bool)1;
short var_28 = (short)22302;
unsigned long long int var_29 = 5395926983980947848ULL;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-12;
signed char var_32 = (signed char)20;
_Bool var_33 = (_Bool)1;
int var_34 = 822858944;
signed char var_35 = (signed char)-6;
unsigned char arr_0 [22] ;
signed char arr_2 [22] [22] ;
unsigned char arr_3 [22] ;
unsigned long long int arr_5 [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
unsigned short arr_8 [22] ;
signed char arr_9 [22] [22] ;
int arr_12 [22] [22] [22] [22] ;
_Bool arr_13 [22] [22] [22] ;
unsigned short arr_14 [22] [22] [22] ;
int arr_17 [22] [22] [22] [22] ;
unsigned int arr_19 [22] [22] [22] [22] ;
unsigned char arr_21 [22] [22] ;
_Bool arr_22 [22] [22] ;
_Bool arr_24 [22] [22] [22] ;
unsigned char arr_25 [22] ;
unsigned long long int arr_26 [22] ;
unsigned char arr_28 [22] [22] [22] ;
unsigned char arr_29 [22] [22] [22] ;
unsigned char arr_6 [22] ;
unsigned long long int arr_10 [22] ;
_Bool arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 5937626614329454676ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 16844937326131313739ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)23451;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1762144530;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)19321 : (unsigned short)23228;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -568281643 : -8841497;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 208108615U : 3508411472U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)194 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = 13937406364768571040ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 15545214303879918360ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
