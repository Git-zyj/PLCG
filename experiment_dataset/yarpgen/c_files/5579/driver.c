#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22840;
unsigned char var_1 = (unsigned char)201;
unsigned short var_5 = (unsigned short)46250;
signed char var_7 = (signed char)-71;
unsigned char var_8 = (unsigned char)105;
int var_9 = 332024173;
unsigned short var_12 = (unsigned short)59656;
unsigned short var_14 = (unsigned short)44051;
unsigned short var_15 = (unsigned short)23743;
short var_19 = (short)19133;
int zero = 0;
signed char var_20 = (signed char)24;
short var_21 = (short)21404;
unsigned int var_22 = 236796430U;
unsigned long long int var_23 = 12042275630711663064ULL;
short var_24 = (short)-1067;
unsigned short var_25 = (unsigned short)26815;
short var_26 = (short)63;
signed char var_27 = (signed char)76;
signed char var_28 = (signed char)45;
long long int var_29 = -4910476807235162351LL;
unsigned short var_30 = (unsigned short)48035;
unsigned short var_31 = (unsigned short)42588;
signed char var_32 = (signed char)-39;
unsigned short var_33 = (unsigned short)58100;
unsigned int var_34 = 1799058385U;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 10090794068816131776ULL;
signed char var_37 = (signed char)19;
int arr_0 [16] [16] ;
int arr_1 [16] [16] ;
signed char arr_3 [13] ;
int arr_4 [13] ;
unsigned short arr_5 [13] ;
unsigned char arr_8 [13] [13] [13] [13] ;
signed char arr_9 [13] [13] ;
int arr_10 [13] [13] [13] [13] [13] ;
signed char arr_11 [13] ;
unsigned short arr_13 [13] ;
int arr_14 [13] [13] ;
unsigned char arr_18 [13] [13] ;
signed char arr_22 [24] ;
signed char arr_23 [24] ;
unsigned char arr_24 [24] ;
unsigned short arr_2 [16] [16] ;
unsigned int arr_16 [13] [13] ;
unsigned short arr_21 [13] [13] [13] ;
short arr_26 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1589731939;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 876693626 : 281026747;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -2047991216;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)62921;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1148256973 : 2132599348;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35131 : (unsigned short)40244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = -507788553;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)5365 : (unsigned short)64339;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 2200916567U : 3408825808U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)54438;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (short)-7642;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
