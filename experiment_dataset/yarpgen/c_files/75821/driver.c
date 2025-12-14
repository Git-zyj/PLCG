#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -613465026166626946LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)1406;
long long int var_4 = -7180588278022833218LL;
long long int var_5 = 3014761156555937238LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 570365784782451366LL;
int var_8 = -992995563;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)51;
unsigned short var_15 = (unsigned short)32659;
int zero = 0;
unsigned int var_16 = 1176052690U;
unsigned short var_17 = (unsigned short)2146;
int var_18 = -2002558766;
signed char var_19 = (signed char)-9;
int var_20 = 1831157845;
_Bool var_21 = (_Bool)1;
int var_22 = -1362155055;
signed char var_23 = (signed char)15;
long long int var_24 = -8544196056525651047LL;
unsigned char var_25 = (unsigned char)208;
unsigned long long int var_26 = 12044323579314248226ULL;
int var_27 = 91358024;
long long int var_28 = -4306603274062288450LL;
unsigned int var_29 = 2138277259U;
signed char var_30 = (signed char)96;
signed char var_31 = (signed char)59;
int var_32 = -1921966458;
long long int var_33 = 3634017177995155294LL;
short var_34 = (short)-1355;
_Bool arr_2 [20] ;
_Bool arr_3 [20] ;
unsigned char arr_4 [20] ;
short arr_5 [20] [20] ;
unsigned char arr_6 [20] ;
signed char arr_7 [20] [20] [20] ;
long long int arr_8 [20] ;
signed char arr_12 [20] ;
long long int arr_25 [20] [20] [20] [20] ;
short arr_28 [20] ;
short arr_30 [20] [20] [20] [20] ;
signed char arr_10 [20] ;
signed char arr_11 [20] [20] [20] ;
signed char arr_14 [20] ;
_Bool arr_17 [20] [20] [20] ;
signed char arr_31 [20] ;
signed char arr_32 [20] ;
long long int arr_33 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)23145;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 2474927355059627706LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2026983982489682754LL : -5463961957992577420LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (short)-30052;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (short)-20729;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)-43;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (signed char)-19 : (signed char)33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)71 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3887990814063861918LL : 920110029681330446LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
