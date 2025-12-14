#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-501;
short var_1 = (short)-19112;
unsigned char var_2 = (unsigned char)208;
unsigned long long int var_3 = 18126503255234249510ULL;
unsigned int var_4 = 477867997U;
int var_5 = 365433376;
unsigned char var_6 = (unsigned char)240;
unsigned long long int var_7 = 13612169730385900414ULL;
long long int var_8 = 2302589572462646123LL;
unsigned long long int var_9 = 13274972835945726424ULL;
int var_10 = 1228220715;
short var_11 = (short)-16923;
unsigned short var_12 = (unsigned short)11008;
unsigned short var_13 = (unsigned short)27526;
short var_14 = (short)-28248;
long long int var_15 = -208763834544035143LL;
int zero = 0;
signed char var_16 = (signed char)-50;
long long int var_17 = 3562436898171677409LL;
signed char var_18 = (signed char)-38;
unsigned short var_19 = (unsigned short)52888;
long long int var_20 = 7694811316479069224LL;
unsigned long long int var_21 = 913016533419213214ULL;
unsigned char var_22 = (unsigned char)206;
unsigned char var_23 = (unsigned char)195;
int var_24 = 1939485221;
unsigned long long int var_25 = 15835975468812973343ULL;
unsigned short var_26 = (unsigned short)8564;
short var_27 = (short)11461;
unsigned int var_28 = 1327994588U;
unsigned char var_29 = (unsigned char)124;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)131;
short var_32 = (short)-19084;
unsigned int var_33 = 1897780860U;
unsigned char var_34 = (unsigned char)173;
unsigned short var_35 = (unsigned short)9566;
unsigned int var_36 = 2668431864U;
int var_37 = -1054650427;
int var_38 = -1208843566;
unsigned short var_39 = (unsigned short)54384;
_Bool var_40 = (_Bool)0;
int var_41 = 765554418;
long long int var_42 = 1049859945807347452LL;
unsigned int var_43 = 2075993009U;
unsigned long long int var_44 = 15691407942633869180ULL;
unsigned long long int var_45 = 2463511047850567050ULL;
int var_46 = 1927904103;
unsigned char arr_6 [18] ;
int arr_10 [18] [18] ;
_Bool arr_28 [23] ;
long long int arr_31 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -843729040 : 993251529;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = -17565970325021302LL;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
