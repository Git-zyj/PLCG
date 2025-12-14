#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21100;
int var_1 = -1896910947;
long long int var_2 = 6898565920433318899LL;
unsigned short var_3 = (unsigned short)33779;
unsigned long long int var_4 = 6402013586229397954ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)99;
long long int var_7 = -8458734132881421602LL;
int var_8 = 1131188617;
int var_9 = 821674489;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3586906808U;
int var_12 = -794906417;
signed char var_13 = (signed char)14;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2201797710U;
int var_17 = 1175340762;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3089030989136393386ULL;
short var_20 = (short)5184;
short var_21 = (short)-25984;
long long int var_22 = -633032400369883826LL;
unsigned long long int var_23 = 18235081674003135701ULL;
signed char var_24 = (signed char)-47;
short var_25 = (short)5092;
unsigned int var_26 = 1500478986U;
unsigned short var_27 = (unsigned short)18604;
unsigned short var_28 = (unsigned short)539;
unsigned short var_29 = (unsigned short)18022;
unsigned short var_30 = (unsigned short)45617;
unsigned int var_31 = 2734098333U;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)149;
int var_34 = -1350181797;
unsigned int var_35 = 3621685145U;
unsigned short arr_11 [15] ;
unsigned short arr_12 [15] ;
int arr_15 [15] [15] [15] [15] [15] [15] ;
long long int arr_24 [19] ;
_Bool arr_27 [19] [19] ;
int arr_30 [19] ;
int arr_31 [19] ;
signed char arr_8 [15] [15] ;
int arr_22 [15] [15] [15] ;
unsigned char arr_23 [15] ;
signed char arr_34 [19] ;
int arr_37 [19] [19] [19] ;
unsigned long long int arr_38 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54854 : (unsigned short)2876;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39703 : (unsigned short)36428;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -477639876 : 59200889;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = -611122603015655923LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 775988250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -272015170;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)70 : (signed char)-108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 968207347 : 1199268396;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -491627212 : 2029236149;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13072984828843871886ULL : 6981337396182534234ULL;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
