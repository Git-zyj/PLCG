#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
short var_2 = (short)4851;
unsigned short var_3 = (unsigned short)64945;
unsigned char var_4 = (unsigned char)48;
int var_6 = 718367740;
_Bool var_7 = (_Bool)1;
int var_8 = -1220116242;
int var_9 = 1301856177;
unsigned short var_10 = (unsigned short)19067;
int zero = 0;
unsigned char var_14 = (unsigned char)190;
unsigned long long int var_15 = 3988763445338368043ULL;
long long int var_16 = 2314500204994634767LL;
unsigned short var_17 = (unsigned short)17208;
short var_18 = (short)19120;
unsigned char var_19 = (unsigned char)93;
unsigned char var_20 = (unsigned char)81;
long long int var_21 = 7265263969588892452LL;
unsigned short var_22 = (unsigned short)32037;
int var_23 = 500936502;
int var_24 = 182981863;
unsigned long long int var_25 = 13531518946833936535ULL;
unsigned short var_26 = (unsigned short)11060;
long long int var_27 = -8471093570947308627LL;
short arr_0 [23] [23] ;
short arr_1 [23] ;
short arr_3 [23] ;
unsigned char arr_5 [10] [10] ;
int arr_6 [10] ;
unsigned char arr_7 [10] ;
_Bool arr_11 [10] [10] ;
unsigned char arr_12 [10] [10] ;
unsigned short arr_4 [23] [23] ;
short arr_9 [10] [10] ;
long long int arr_20 [10] ;
unsigned char arr_21 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-7786;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-5632 : (short)30654;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-20351;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -970024338;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61002 : (unsigned short)53053;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-24875 : (short)-19664;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 7721417156199430808LL : -7997519798382872158LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)178;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
