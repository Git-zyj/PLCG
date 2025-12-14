#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2615116482U;
unsigned short var_1 = (unsigned short)53415;
unsigned short var_2 = (unsigned short)15233;
unsigned short var_3 = (unsigned short)28516;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)19185;
int var_7 = 2027151372;
unsigned int var_8 = 2992259894U;
unsigned long long int var_9 = 5275353939829733836ULL;
int var_10 = -1400925548;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)30979;
int zero = 0;
unsigned short var_14 = (unsigned short)352;
int var_15 = -1473084015;
unsigned short var_16 = (unsigned short)55601;
signed char var_17 = (signed char)36;
int var_18 = 811244027;
int var_19 = -259957025;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5592511435015057726LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 547148377U;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-25638;
unsigned short var_27 = (unsigned short)57607;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)21874;
short var_30 = (short)-5825;
unsigned long long int var_31 = 4842970501307272836ULL;
unsigned short var_32 = (unsigned short)27370;
signed char arr_1 [25] [25] ;
unsigned short arr_2 [25] ;
unsigned char arr_3 [25] [25] ;
_Bool arr_6 [25] [25] ;
unsigned int arr_7 [25] [25] ;
signed char arr_9 [25] [25] ;
unsigned short arr_10 [25] [25] ;
unsigned long long int arr_13 [25] [25] [25] [25] ;
unsigned short arr_16 [25] [25] ;
unsigned short arr_17 [25] [25] [25] ;
unsigned char arr_19 [25] ;
_Bool arr_5 [25] ;
unsigned char arr_12 [25] ;
unsigned short arr_21 [25] ;
unsigned short arr_26 [10] ;
int arr_27 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59906 : (unsigned short)47195;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)108 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 1177983142U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)7706 : (unsigned short)53083;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 11080343179578797196ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)32488;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)17715 : (unsigned short)6400;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)10 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25944 : (unsigned short)37858;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (unsigned short)32410;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = -838851989;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
