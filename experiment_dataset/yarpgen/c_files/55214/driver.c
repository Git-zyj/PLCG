#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 329228771992817715LL;
unsigned long long int var_1 = 9126775571463739699ULL;
unsigned int var_2 = 1800607617U;
short var_3 = (short)2840;
int var_4 = 1717518007;
unsigned int var_5 = 4271685781U;
unsigned char var_6 = (unsigned char)247;
signed char var_7 = (signed char)-97;
short var_9 = (short)-26674;
unsigned short var_10 = (unsigned short)57198;
signed char var_11 = (signed char)-92;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-6360;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)4775;
signed char var_17 = (signed char)122;
unsigned short var_18 = (unsigned short)52238;
short var_19 = (short)-21920;
int var_20 = -1531784491;
signed char var_21 = (signed char)65;
unsigned char var_22 = (unsigned char)175;
signed char var_23 = (signed char)-65;
signed char var_24 = (signed char)10;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)42995;
signed char var_27 = (signed char)21;
signed char var_28 = (signed char)-63;
_Bool var_29 = (_Bool)1;
int var_30 = 738257020;
long long int var_31 = -2786042755722949242LL;
short var_32 = (short)-31072;
unsigned short var_33 = (unsigned short)54300;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-53;
signed char var_36 = (signed char)2;
signed char var_37 = (signed char)118;
int var_38 = -1454326939;
unsigned short var_39 = (unsigned short)34464;
short arr_0 [10] [10] ;
signed char arr_2 [12] ;
long long int arr_4 [12] [12] ;
unsigned short arr_6 [18] [18] ;
_Bool arr_7 [18] ;
signed char arr_8 [18] [18] ;
short arr_12 [11] [11] ;
short arr_17 [23] ;
_Bool arr_19 [23] ;
short arr_22 [23] [23] ;
_Bool arr_23 [23] [23] [23] ;
_Bool arr_33 [23] [23] [23] ;
int arr_35 [24] ;
signed char arr_36 [24] [24] ;
unsigned long long int arr_5 [12] ;
signed char arr_9 [18] ;
int arr_15 [11] [11] [11] ;
unsigned int arr_24 [23] [23] ;
signed char arr_25 [23] ;
long long int arr_30 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11222;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -3603739745245843220LL : -2733638951211451615LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)13707;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (short)14605;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (short)-25884;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (short)15482;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = 799257682;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_36 [i_0] [i_1] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2540502825161668409ULL : 12794836915751777093ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 551715100 : 1389391032;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = 1898630127U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 8650613955582691805LL;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
