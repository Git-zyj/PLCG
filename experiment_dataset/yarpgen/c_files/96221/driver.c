#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17312;
unsigned int var_1 = 12643419U;
unsigned int var_2 = 1994795539U;
unsigned int var_3 = 2582025494U;
unsigned short var_4 = (unsigned short)60885;
unsigned long long int var_6 = 5316229385372106958ULL;
short var_7 = (short)23643;
int var_8 = -1429547246;
unsigned long long int var_10 = 12545240306165319625ULL;
int var_11 = 1397337918;
unsigned short var_12 = (unsigned short)19587;
unsigned long long int var_13 = 13318612569803056679ULL;
short var_14 = (short)-14319;
int zero = 0;
unsigned int var_15 = 3364148449U;
unsigned short var_16 = (unsigned short)26414;
short var_17 = (short)-26270;
long long int var_18 = -3255834771829288655LL;
int var_19 = -1132299166;
unsigned long long int var_20 = 1919216501336696094ULL;
short var_21 = (short)14624;
int var_22 = -1135877910;
unsigned long long int var_23 = 4550318796313613376ULL;
unsigned int var_24 = 1323505538U;
int var_25 = 60107607;
int var_26 = 206579701;
short var_27 = (short)-25571;
unsigned int var_28 = 1145091461U;
short var_29 = (short)-21633;
unsigned int arr_0 [16] ;
_Bool arr_5 [25] ;
unsigned int arr_6 [25] [25] ;
signed char arr_8 [25] ;
unsigned long long int arr_10 [25] [25] [25] ;
short arr_11 [25] [25] [25] ;
signed char arr_13 [25] [25] [25] [25] ;
unsigned short arr_23 [25] ;
unsigned int arr_4 [16] ;
unsigned int arr_7 [25] ;
signed char arr_15 [25] [25] ;
int arr_18 [25] ;
unsigned short arr_21 [25] ;
_Bool arr_22 [25] [25] [25] ;
short arr_30 [25] [25] [25] ;
int arr_31 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2752975592U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 1596833743U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 7027618554366033282ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-20748 : (short)-9685;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (unsigned short)55956;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 183325773U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3674453427U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-67 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1717205578 : -1198394577;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (unsigned short)36344;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (short)-24052;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = 991320789;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
