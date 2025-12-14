#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
short var_1 = (short)30236;
short var_2 = (short)1113;
long long int var_3 = -9209162546131287420LL;
int var_4 = -537718984;
int var_5 = 1718437083;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)22;
unsigned long long int var_8 = 16968550322228181885ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-49;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-11381;
int zero = 0;
short var_15 = (short)-4036;
short var_16 = (short)28062;
signed char var_17 = (signed char)97;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-2;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7176344097968691377LL;
int var_22 = 1649054901;
signed char var_23 = (signed char)31;
unsigned long long int var_24 = 2582074647364451136ULL;
short var_25 = (short)16355;
unsigned char var_26 = (unsigned char)63;
_Bool var_27 = (_Bool)0;
int var_28 = 1113023081;
long long int var_29 = 8927626971583888460LL;
signed char var_30 = (signed char)-97;
unsigned char var_31 = (unsigned char)111;
signed char var_32 = (signed char)28;
short var_33 = (short)25178;
_Bool var_34 = (_Bool)1;
short var_35 = (short)-254;
signed char var_36 = (signed char)8;
unsigned char var_37 = (unsigned char)127;
short var_38 = (short)22457;
signed char var_39 = (signed char)-88;
short var_40 = (short)2133;
int var_41 = 1890894415;
_Bool var_42 = (_Bool)1;
signed char var_43 = (signed char)-99;
short var_44 = (short)23142;
signed char var_45 = (signed char)-42;
signed char arr_2 [16] ;
signed char arr_3 [16] [16] ;
int arr_5 [16] [16] [16] ;
int arr_8 [16] ;
unsigned char arr_16 [16] [16] [16] [16] ;
_Bool arr_17 [16] [16] ;
long long int arr_19 [16] [16] [16] [16] [16] ;
unsigned char arr_18 [16] [16] ;
short arr_21 [16] [16] [16] ;
int arr_28 [16] [16] [16] ;
_Bool arr_34 [16] [16] ;
signed char arr_35 [16] [16] [16] ;
signed char arr_45 [16] ;
signed char arr_46 [16] ;
_Bool arr_51 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -590001112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 1937420248;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -3949057263206174483LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)-26834;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -266577126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_51 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
