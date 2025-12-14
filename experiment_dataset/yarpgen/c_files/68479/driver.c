#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)42;
unsigned short var_5 = (unsigned short)41583;
int var_7 = 1054845345;
unsigned int var_9 = 1446595716U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)139;
int var_14 = 1449354007;
unsigned long long int var_15 = 5243148017802077410ULL;
_Bool var_16 = (_Bool)0;
int var_18 = -227900248;
unsigned int var_19 = 2314896169U;
int zero = 0;
signed char var_20 = (signed char)-3;
unsigned long long int var_21 = 3732694852775301987ULL;
unsigned long long int var_22 = 16738506222491169957ULL;
unsigned char var_23 = (unsigned char)98;
int var_24 = -1235621175;
int var_25 = 658126363;
signed char var_26 = (signed char)103;
short var_27 = (short)-9858;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 685263779U;
signed char var_30 = (signed char)69;
long long int var_31 = 2580335974567896917LL;
signed char var_32 = (signed char)21;
short var_33 = (short)-13148;
long long int var_34 = 5490678416256969351LL;
unsigned char var_35 = (unsigned char)180;
unsigned int var_36 = 2441604515U;
unsigned int var_37 = 2116020974U;
_Bool var_38 = (_Bool)1;
unsigned int var_39 = 2791490727U;
unsigned short var_40 = (unsigned short)4612;
signed char var_41 = (signed char)-69;
short var_42 = (short)19597;
unsigned char var_43 = (unsigned char)181;
unsigned int var_44 = 4094917820U;
long long int var_45 = 6180274780956721998LL;
unsigned char var_46 = (unsigned char)148;
int var_47 = 649320952;
int var_48 = -1650352249;
unsigned int var_49 = 2013819073U;
unsigned char var_50 = (unsigned char)159;
unsigned int var_51 = 4141918320U;
short arr_0 [13] ;
short arr_2 [13] [13] ;
short arr_3 [13] [13] ;
_Bool arr_4 [13] ;
signed char arr_6 [13] [13] [13] ;
int arr_9 [13] [13] [13] ;
short arr_18 [13] [13] [13] ;
unsigned char arr_22 [24] [24] ;
long long int arr_26 [24] [24] ;
unsigned int arr_30 [14] [14] [14] ;
unsigned int arr_31 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-19760;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22673;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-32243;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1195904862 : -66536099;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)887;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)197 : (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 5835170966447857212LL : -4711824992141476421LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1423283108U : 770824582U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 4067464402U;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
