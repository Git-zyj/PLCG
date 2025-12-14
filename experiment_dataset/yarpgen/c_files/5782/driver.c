#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13391047010135225968ULL;
unsigned short var_2 = (unsigned short)30790;
unsigned int var_3 = 4102901352U;
unsigned int var_4 = 3056292122U;
unsigned char var_5 = (unsigned char)65;
unsigned short var_6 = (unsigned short)60055;
long long int var_7 = 7902508560041285825LL;
unsigned int var_8 = 3629277690U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2917843214U;
unsigned short var_11 = (unsigned short)65114;
int var_12 = -30435548;
int var_13 = -871693390;
unsigned int var_14 = 1962184295U;
short var_16 = (short)21603;
int zero = 0;
short var_17 = (short)-30480;
int var_18 = -1996900285;
unsigned int var_19 = 1723650448U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 478066465U;
unsigned char var_22 = (unsigned char)33;
unsigned int var_23 = 562092425U;
int var_24 = -1906455973;
unsigned short var_25 = (unsigned short)7498;
int var_26 = -1373940664;
unsigned int var_27 = 3666999915U;
short var_28 = (short)7196;
int var_29 = 1147874241;
int var_30 = 1813808141;
int var_31 = -216252008;
unsigned int var_32 = 3668579565U;
unsigned char var_33 = (unsigned char)159;
unsigned int var_34 = 1948584358U;
unsigned char var_35 = (unsigned char)216;
unsigned short var_36 = (unsigned short)64210;
unsigned int var_37 = 4268106276U;
short var_38 = (short)32526;
int arr_0 [23] ;
int arr_1 [23] [23] ;
int arr_2 [23] ;
short arr_5 [23] ;
int arr_8 [23] ;
int arr_9 [23] ;
_Bool arr_11 [23] [23] [23] ;
unsigned int arr_14 [23] [23] [23] ;
int arr_15 [23] [23] ;
int arr_17 [23] [23] [23] [23] ;
signed char arr_27 [23] [23] ;
unsigned int arr_29 [23] [23] [23] [23] ;
unsigned char arr_33 [23] ;
long long int arr_38 [23] ;
long long int arr_13 [23] [23] [23] ;
unsigned short arr_20 [23] [23] [23] ;
signed char arr_30 [23] [23] ;
unsigned short arr_34 [23] [23] [23] [23] ;
long long int arr_35 [23] ;
unsigned int arr_39 [23] ;
unsigned long long int arr_40 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 651324009 : 1294590604;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1609356218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1178021136 : 1647532244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-2999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1195915105 : -257818145;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2126685700 : -1597459712;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 40589349U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 643741096;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -456015627 : -1119699451;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)99 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2052426047U : 28526285U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = 6992228738940212647LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 466284467393326921LL : 963242187906085291LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)37153 : (unsigned short)50515;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)50397 : (unsigned short)15042;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 6303052116052602415LL : 7050914144721294252LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = 3198121448U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = 13998711640028279114ULL;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
