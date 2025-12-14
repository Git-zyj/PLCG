#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1226784396;
signed char var_2 = (signed char)110;
unsigned long long int var_5 = 13197926910334400449ULL;
unsigned long long int var_6 = 165549179936347014ULL;
int var_8 = 1994694470;
long long int var_13 = 5386829317335500989LL;
int var_16 = -660650624;
int var_17 = 1982663080;
int zero = 0;
signed char var_20 = (signed char)75;
long long int var_21 = 8293444488681853156LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 5891897246363560523ULL;
unsigned long long int var_24 = 1704353891380011616ULL;
unsigned short var_25 = (unsigned short)52655;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 282613784U;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 889983130U;
unsigned long long int var_30 = 16541973328159242460ULL;
int var_31 = 1651431513;
unsigned long long int var_32 = 2859185843526572406ULL;
int var_33 = -104926907;
int var_34 = 1363059226;
unsigned short var_35 = (unsigned short)64284;
_Bool var_36 = (_Bool)0;
signed char var_37 = (signed char)-24;
short var_38 = (short)-12687;
unsigned long long int var_39 = 15715136029433939035ULL;
signed char var_40 = (signed char)-24;
int var_41 = 713235248;
unsigned short var_42 = (unsigned short)54338;
signed char var_43 = (signed char)44;
int var_44 = -1249119518;
unsigned long long int var_45 = 14132592448460183936ULL;
unsigned long long int var_46 = 1672655016932750815ULL;
_Bool arr_0 [23] ;
int arr_1 [23] ;
unsigned long long int arr_2 [23] [23] [23] ;
int arr_3 [23] [23] ;
int arr_4 [23] [23] [23] [23] ;
unsigned int arr_5 [23] [23] ;
short arr_14 [21] ;
signed char arr_16 [21] ;
unsigned long long int arr_19 [21] [21] [21] [21] ;
unsigned long long int arr_20 [21] [21] [21] [21] ;
_Bool arr_21 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1466099553;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 6356300762123958264ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -434549774;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2072594711;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1816757163U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (short)30771;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 12224854858285856673ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 17653261806821734374ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
