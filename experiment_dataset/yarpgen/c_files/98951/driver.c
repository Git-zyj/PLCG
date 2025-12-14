#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13363;
unsigned short var_4 = (unsigned short)37949;
long long int var_5 = -8808071714001969606LL;
unsigned short var_6 = (unsigned short)53378;
signed char var_7 = (signed char)15;
unsigned char var_8 = (unsigned char)216;
unsigned char var_9 = (unsigned char)148;
signed char var_10 = (signed char)-112;
unsigned short var_11 = (unsigned short)53506;
unsigned short var_14 = (unsigned short)22803;
unsigned short var_15 = (unsigned short)49761;
unsigned short var_16 = (unsigned short)38614;
int zero = 0;
unsigned short var_17 = (unsigned short)1656;
signed char var_18 = (signed char)111;
unsigned int var_19 = 3660658828U;
signed char var_20 = (signed char)53;
unsigned short var_21 = (unsigned short)52023;
long long int var_22 = 1974420522490131612LL;
unsigned int var_23 = 2252697336U;
long long int var_24 = 5260625458944019792LL;
unsigned int var_25 = 1255015118U;
unsigned short var_26 = (unsigned short)6539;
unsigned char var_27 = (unsigned char)122;
unsigned short var_28 = (unsigned short)31297;
unsigned short var_29 = (unsigned short)55748;
signed char var_30 = (signed char)31;
unsigned short var_31 = (unsigned short)6918;
unsigned short var_32 = (unsigned short)2908;
long long int var_33 = 6646135571282277103LL;
unsigned short var_34 = (unsigned short)63793;
unsigned short var_35 = (unsigned short)51134;
unsigned int var_36 = 1271021423U;
unsigned short var_37 = (unsigned short)34861;
unsigned char var_38 = (unsigned char)27;
unsigned short var_39 = (unsigned short)17487;
unsigned char var_40 = (unsigned char)148;
unsigned short var_41 = (unsigned short)3681;
unsigned short var_42 = (unsigned short)12166;
long long int var_43 = 2082288739707384362LL;
signed char var_44 = (signed char)-119;
unsigned short var_45 = (unsigned short)62411;
signed char arr_0 [15] ;
unsigned short arr_1 [15] [15] ;
unsigned short arr_3 [16] [16] ;
signed char arr_4 [16] [16] ;
unsigned char arr_5 [16] ;
unsigned short arr_7 [25] ;
unsigned short arr_8 [25] ;
unsigned short arr_9 [25] [25] ;
unsigned int arr_10 [25] [25] ;
long long int arr_13 [19] ;
unsigned short arr_14 [19] ;
signed char arr_17 [15] ;
unsigned short arr_24 [23] [23] [23] ;
long long int arr_25 [23] ;
unsigned char arr_26 [23] [23] [23] ;
long long int arr_32 [23] [23] [23] [23] [23] ;
unsigned short arr_38 [11] [11] [11] ;
unsigned short arr_40 [11] [11] [11] [11] ;
unsigned short arr_2 [15] [15] ;
long long int arr_15 [19] ;
unsigned int arr_16 [19] [19] ;
long long int arr_20 [15] ;
signed char arr_41 [11] [11] [11] ;
unsigned char arr_42 [11] [11] [11] ;
unsigned short arr_45 [11] [11] [11] ;
signed char arr_48 [11] [11] [11] ;
signed char arr_49 [11] [11] [11] ;
unsigned char arr_50 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)5071;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)48790;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)19606;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)29889;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)8094;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 2349717086U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -2455414988391832916LL : 6210344425830998742LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned short)62016;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)2383;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -1764766172943214546LL : 5596677251540125922LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = -6037843318072569327LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)27179;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47417;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40744;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 7881450904773752180LL : 5747360328065479738LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 2001476205U : 237312422U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 119405696780614037LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (unsigned short)23984;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (unsigned char)205;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_49 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
