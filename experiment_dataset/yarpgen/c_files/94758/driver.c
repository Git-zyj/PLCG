#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6002898494176129276LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -4638113861023825300LL;
unsigned int var_3 = 2146579295U;
long long int var_4 = -1707564999195257947LL;
long long int var_5 = 118623601085084443LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 8251063155790839927LL;
unsigned long long int var_9 = 17952099980627960110ULL;
short var_10 = (short)2904;
short var_11 = (short)21161;
long long int var_12 = -6472399415485404408LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -931706784;
unsigned long long int var_15 = 3894917492549196903ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3000284884628329035LL;
long long int var_18 = -8125473082686130054LL;
unsigned long long int var_19 = 2310540494142959868ULL;
unsigned long long int var_20 = 2562694683052229607ULL;
long long int var_21 = 8326894283810403161LL;
short var_22 = (short)1685;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)236;
unsigned long long int arr_0 [25] ;
unsigned char arr_1 [25] ;
short arr_2 [25] [25] ;
short arr_3 [25] [25] [25] ;
short arr_4 [25] [25] ;
long long int arr_5 [25] [25] ;
unsigned char arr_7 [25] [25] ;
long long int arr_8 [25] ;
long long int arr_9 [25] ;
unsigned char arr_10 [25] [25] ;
long long int arr_11 [25] ;
short arr_14 [21] ;
unsigned long long int arr_15 [21] ;
int arr_16 [21] ;
unsigned int arr_18 [21] [21] ;
int arr_20 [21] [21] ;
unsigned long long int arr_23 [21] ;
_Bool arr_25 [21] ;
_Bool arr_26 [21] ;
short arr_28 [20] ;
unsigned int arr_33 [20] [20] [20] ;
unsigned char arr_34 [20] ;
unsigned long long int arr_6 [25] ;
_Bool arr_13 [25] ;
int arr_24 [21] ;
long long int arr_35 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2030458350357251893ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)22670;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-23923;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)19406;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -5849997923712544070LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -102167144862071347LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 9115004337404501666LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -4308072416759919710LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-32642 : (short)32560;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 16156691771448887469ULL : 13767143625004063839ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1836204348 : 2078975725;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = 4077115026U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 1582590980;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 17731485933656600141ULL : 1063965128389820130ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (short)3880;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4183522420U : 3387563474U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 9685565256008712711ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 1442343883 : -442036291;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? -653694192509496799LL : -4350684740250603036LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
