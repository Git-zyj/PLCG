#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6774;
unsigned char var_5 = (unsigned char)26;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6853214398216336448LL;
int var_10 = 1762947011;
long long int var_15 = 7892006031303969865LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)19567;
int zero = 0;
short var_18 = (short)17337;
unsigned char var_19 = (unsigned char)78;
unsigned short var_20 = (unsigned short)8412;
unsigned short var_21 = (unsigned short)61631;
int var_22 = -1490205391;
unsigned short var_23 = (unsigned short)26244;
int var_24 = -18341643;
_Bool var_25 = (_Bool)1;
long long int var_26 = -7171647149120071489LL;
int var_27 = -498205837;
int var_28 = -1283733416;
_Bool var_29 = (_Bool)1;
short var_30 = (short)117;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 4847247463156452180ULL;
unsigned char var_33 = (unsigned char)79;
short var_34 = (short)32065;
unsigned char var_35 = (unsigned char)99;
unsigned long long int var_36 = 1965769593896387778ULL;
short var_37 = (short)16846;
short var_38 = (short)32285;
unsigned char var_39 = (unsigned char)144;
_Bool var_40 = (_Bool)0;
int var_41 = 525990367;
_Bool var_42 = (_Bool)0;
signed char var_43 = (signed char)67;
unsigned char var_44 = (unsigned char)55;
unsigned int var_45 = 1914770070U;
unsigned long long int var_46 = 9795289837563836834ULL;
unsigned short var_47 = (unsigned short)34185;
long long int var_48 = -6919164840512492269LL;
int var_49 = -361115072;
unsigned short var_50 = (unsigned short)60180;
unsigned long long int var_51 = 7466840459080185139ULL;
unsigned char var_52 = (unsigned char)65;
unsigned char var_53 = (unsigned char)152;
long long int var_54 = 7742789889797415729LL;
short var_55 = (short)-21940;
unsigned char var_56 = (unsigned char)245;
long long int var_57 = 6976545961875254813LL;
unsigned short var_58 = (unsigned short)58615;
short var_59 = (short)-32624;
unsigned short var_60 = (unsigned short)7407;
long long int var_61 = -6202936864690328055LL;
_Bool var_62 = (_Bool)1;
unsigned short var_63 = (unsigned short)41844;
unsigned short var_64 = (unsigned short)11887;
short var_65 = (short)1138;
unsigned char var_66 = (unsigned char)150;
unsigned long long int var_67 = 1724130958609447466ULL;
unsigned long long int var_68 = 10216362802944567110ULL;
unsigned short var_69 = (unsigned short)30228;
signed char var_70 = (signed char)31;
int arr_0 [23] ;
short arr_1 [23] ;
unsigned char arr_2 [23] ;
long long int arr_3 [23] [23] ;
signed char arr_5 [23] ;
short arr_8 [23] [23] [23] [23] [23] ;
short arr_12 [23] [23] [23] ;
unsigned int arr_15 [23] ;
unsigned long long int arr_18 [23] [23] ;
_Bool arr_19 [23] [23] [23] [23] [23] ;
int arr_20 [23] [23] [23] ;
long long int arr_22 [23] [23] ;
unsigned long long int arr_28 [22] [22] ;
unsigned char arr_30 [22] [22] ;
int arr_31 [22] [22] [22] ;
unsigned short arr_37 [22] [22] [22] [22] ;
unsigned long long int arr_40 [22] [22] ;
signed char arr_43 [22] [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_46 [22] [22] [22] [22] [22] [22] ;
int arr_49 [22] [22] ;
_Bool arr_52 [22] ;
short arr_55 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1854549817;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-14639;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 2465460349239247185LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-13560 : (short)13646;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)31639;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1661130719U : 1766632407U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = 17812497753715000096ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -79760836 : -1227860907;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? -6779314081961647906LL : 2353718802691394667LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = 8046401891559441477ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -467467145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42433;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? 8332792660081091526ULL : 14770674911512780140ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2785886894695048670ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_49 [i_0] [i_1] = (i_1 % 2 == 0) ? 499794855 : -1477793802;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-6311;
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
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
