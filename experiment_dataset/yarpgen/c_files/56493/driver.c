#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -784712298;
unsigned char var_1 = (unsigned char)44;
unsigned short var_2 = (unsigned short)15640;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-27399;
signed char var_5 = (signed char)10;
int var_6 = 1062397683;
unsigned int var_7 = 1825782331U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 16983991015935128355ULL;
unsigned int var_10 = 2385456139U;
short var_11 = (short)-21614;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)25889;
unsigned int var_15 = 887143215U;
unsigned char var_16 = (unsigned char)50;
unsigned int var_17 = 3618801974U;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
unsigned char var_19 = (unsigned char)177;
unsigned long long int var_20 = 16426305828339378742ULL;
int var_21 = -309039441;
unsigned int var_22 = 4143541512U;
long long int var_23 = -7399556895128641592LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
int var_27 = 1756307060;
short var_28 = (short)-1765;
signed char var_29 = (signed char)-57;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)220;
long long int var_32 = 1212307214954019176LL;
unsigned int var_33 = 2855640290U;
unsigned long long int var_34 = 13718844216741823055ULL;
unsigned int var_35 = 1479069369U;
signed char var_36 = (signed char)-43;
unsigned long long int var_37 = 9159911488841597541ULL;
unsigned int var_38 = 1512602762U;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)36260;
unsigned long long int var_41 = 5285910394512987559ULL;
long long int var_42 = -1111521884379711955LL;
_Bool var_43 = (_Bool)0;
_Bool var_44 = (_Bool)0;
unsigned char var_45 = (unsigned char)104;
unsigned long long int var_46 = 4567242888729059699ULL;
int var_47 = -416915820;
short var_48 = (short)-15439;
unsigned short var_49 = (unsigned short)16463;
_Bool var_50 = (_Bool)0;
signed char var_51 = (signed char)127;
short var_52 = (short)16063;
unsigned short var_53 = (unsigned short)47545;
signed char var_54 = (signed char)8;
unsigned char var_55 = (unsigned char)173;
unsigned short var_56 = (unsigned short)50252;
_Bool var_57 = (_Bool)0;
int var_58 = 1028776041;
signed char var_59 = (signed char)63;
signed char var_60 = (signed char)95;
short var_61 = (short)-27465;
unsigned long long int var_62 = 16360447982898783607ULL;
short var_63 = (short)-4969;
unsigned long long int var_64 = 4722944099533820089ULL;
unsigned int var_65 = 2621789105U;
signed char arr_0 [24] ;
long long int arr_1 [24] ;
unsigned short arr_5 [13] [13] ;
short arr_10 [24] [24] ;
unsigned short arr_11 [24] [24] ;
int arr_12 [24] ;
unsigned char arr_13 [24] [24] ;
unsigned short arr_14 [24] [24] [24] ;
unsigned char arr_15 [24] [24] ;
signed char arr_20 [24] [24] ;
unsigned long long int arr_23 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_26 [24] [24] [24] [24] [24] ;
unsigned char arr_29 [24] [24] [24] [24] [24] [24] [24] ;
long long int arr_34 [24] [24] [24] [24] ;
signed char arr_36 [14] [14] ;
unsigned long long int arr_39 [14] [14] [14] ;
int arr_44 [13] [13] ;
signed char arr_48 [13] [13] [13] ;
short arr_27 [24] [24] [24] [24] [24] [24] ;
short arr_33 [24] [24] [24] [24] ;
int arr_42 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -8139585414245997708LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)35113;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)27224 : (short)-10448;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)49051 : (unsigned short)11624;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = -785663110;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)37233 : (unsigned short)7754;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)-27;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 17934109342325263551ULL : 14539995847666471810ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)187 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -4598334106763166927LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_36 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7160489684752571374ULL : 1805943262561357582ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_44 [i_0] [i_1] = 1322795646;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (short)29275 : (short)23331;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)28454 : (short)2341;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? -274662023 : -2036729268;
}

void checksum() {
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
