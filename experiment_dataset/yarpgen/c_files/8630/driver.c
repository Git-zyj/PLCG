#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned int var_1 = 3445524805U;
unsigned long long int var_2 = 3168823786764579403ULL;
int var_3 = 2087293455;
unsigned long long int var_4 = 4288650683554422455ULL;
short var_5 = (short)3076;
signed char var_6 = (signed char)36;
unsigned long long int var_7 = 16336020962518050411ULL;
int var_8 = -1745099630;
long long int var_9 = -1405901498113999972LL;
unsigned short var_10 = (unsigned short)30721;
signed char var_11 = (signed char)11;
int zero = 0;
unsigned short var_12 = (unsigned short)7542;
int var_13 = -589611586;
short var_14 = (short)-18946;
unsigned long long int var_15 = 10861547473228787641ULL;
unsigned short var_16 = (unsigned short)12648;
unsigned short var_17 = (unsigned short)3600;
long long int var_18 = -6590468678258830490LL;
unsigned long long int var_19 = 3745720803695990089ULL;
unsigned char var_20 = (unsigned char)21;
signed char var_21 = (signed char)-90;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)74;
unsigned long long int var_24 = 6827137685066911992ULL;
short var_25 = (short)28616;
signed char var_26 = (signed char)-79;
unsigned char var_27 = (unsigned char)160;
signed char var_28 = (signed char)101;
unsigned int var_29 = 3023078816U;
unsigned char var_30 = (unsigned char)242;
signed char var_31 = (signed char)-124;
unsigned char var_32 = (unsigned char)89;
int var_33 = 684168444;
unsigned long long int var_34 = 1565265607262159689ULL;
short var_35 = (short)8842;
_Bool var_36 = (_Bool)1;
int var_37 = -707112701;
int var_38 = 1031854986;
signed char var_39 = (signed char)123;
int var_40 = 1047176438;
unsigned char arr_0 [12] ;
int arr_1 [12] [12] ;
signed char arr_3 [18] ;
signed char arr_5 [18] ;
unsigned char arr_6 [18] ;
unsigned char arr_9 [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] ;
unsigned char arr_11 [18] [18] ;
unsigned long long int arr_12 [18] ;
int arr_13 [18] ;
unsigned char arr_17 [18] ;
unsigned long long int arr_23 [18] [18] ;
int arr_26 [24] ;
unsigned int arr_27 [24] ;
unsigned long long int arr_28 [24] [24] ;
unsigned long long int arr_29 [24] ;
unsigned char arr_31 [24] ;
unsigned int arr_32 [24] [24] ;
short arr_33 [24] [24] ;
int arr_36 [24] [24] [24] ;
unsigned long long int arr_37 [24] ;
signed char arr_39 [24] [24] [24] ;
unsigned long long int arr_42 [24] [24] ;
signed char arr_44 [24] ;
int arr_45 [24] [24] [24] ;
unsigned char arr_46 [24] [24] ;
unsigned char arr_47 [24] [24] ;
int arr_48 [24] [24] [24] [24] [24] ;
int arr_49 [24] [24] ;
_Bool arr_50 [24] [24] [24] [24] [24] ;
short arr_52 [22] ;
signed char arr_53 [22] [22] ;
unsigned short arr_55 [22] [22] [22] ;
signed char arr_57 [22] [22] [22] ;
int arr_61 [21] [21] ;
unsigned long long int arr_2 [12] ;
signed char arr_14 [18] ;
unsigned long long int arr_15 [18] ;
int arr_18 [18] [18] [18] ;
_Bool arr_19 [18] ;
unsigned char arr_20 [18] [18] ;
signed char arr_21 [18] ;
unsigned char arr_22 [18] ;
unsigned short arr_30 [24] ;
_Bool arr_35 [24] [24] ;
unsigned long long int arr_40 [24] [24] [24] ;
int arr_41 [24] ;
unsigned long long int arr_56 [22] [22] [22] ;
unsigned char arr_59 [22] [22] ;
unsigned char arr_60 [22] [22] ;
unsigned long long int arr_64 [21] [21] ;
short arr_65 [21] ;
unsigned long long int arr_72 [13] [13] [13] [13] ;
unsigned char arr_73 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 337924510;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3731557858264294206ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 8961181330004023126ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -686612255;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = 5857370680717182059ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 292418727;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = 857595181U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = 1423638130595557589ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = 13531678187757831297ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = 3324614686U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-14373 : (short)29394;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1557413817 : 467628411;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 7651509390366809935ULL : 16835283894268313685ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_42 [i_0] [i_1] = 14223095161047768582ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 1782391059;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = -4438522;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_49 [i_0] [i_1] = -143675137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = (short)-12986;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_53 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (unsigned short)20092;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_61 [i_0] [i_1] = 826649992;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 10883471562026082510ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)-79;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3653716047419780554ULL : 12767593671075351203ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1525334626 : -175233277;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)7913;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4477618181529761019ULL : 7243406611998185209ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = -823279987;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = 12039654833879089852ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_59 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_60 [i_0] [i_1] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_64 [i_0] [i_1] = (i_1 % 2 == 0) ? 2846585571672662070ULL : 15032857765419872581ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_65 [i_0] = (i_0 % 2 == 0) ? (short)25462 : (short)9072;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = 11638412785403762565ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_73 [i_0] = (unsigned char)41;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_56 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_72 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_73 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
