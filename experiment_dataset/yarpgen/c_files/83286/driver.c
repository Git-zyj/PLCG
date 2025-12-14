#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5305006857876723950ULL;
long long int var_1 = -1301716914159354745LL;
signed char var_2 = (signed char)-86;
unsigned short var_3 = (unsigned short)18545;
int var_4 = -1500259091;
unsigned short var_5 = (unsigned short)43665;
long long int var_6 = -3233404953501636575LL;
unsigned char var_8 = (unsigned char)71;
unsigned char var_9 = (unsigned char)78;
int var_10 = -678618259;
int zero = 0;
unsigned int var_11 = 3786897853U;
int var_12 = 1557049502;
int var_13 = -1051667940;
unsigned char var_14 = (unsigned char)98;
long long int var_15 = -7251139506923850936LL;
unsigned short var_16 = (unsigned short)19614;
unsigned short var_17 = (unsigned short)2035;
unsigned short var_18 = (unsigned short)10093;
int var_19 = 2045538587;
short var_20 = (short)21846;
signed char var_21 = (signed char)42;
unsigned int var_22 = 848051391U;
long long int var_23 = 4092712174297682437LL;
unsigned long long int var_24 = 11103836524118551500ULL;
unsigned int var_25 = 3818848260U;
int var_26 = -1510704972;
unsigned short var_27 = (unsigned short)38460;
unsigned char var_28 = (unsigned char)104;
signed char var_29 = (signed char)110;
unsigned short var_30 = (unsigned short)21017;
int var_31 = -1291609495;
unsigned long long int var_32 = 15722320129790391370ULL;
unsigned long long int arr_0 [24] ;
int arr_2 [24] [24] [24] ;
_Bool arr_3 [24] [24] [24] ;
_Bool arr_4 [24] ;
short arr_5 [24] [24] ;
_Bool arr_6 [24] [24] [24] ;
long long int arr_7 [25] ;
unsigned long long int arr_8 [25] ;
signed char arr_9 [25] [25] ;
unsigned char arr_10 [25] [25] ;
short arr_12 [25] [25] ;
short arr_13 [25] [25] ;
_Bool arr_14 [25] [25] ;
unsigned long long int arr_16 [25] [25] ;
short arr_17 [23] ;
_Bool arr_20 [23] [23] ;
int arr_21 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 457611760678142919ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -2065793378;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-9747;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -2689787491173644243LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 6192096959383378491ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-13707;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (short)1205;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 14118859111728977673ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (short)3810;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = -253049096;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
