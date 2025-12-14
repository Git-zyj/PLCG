#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 969610769;
unsigned char var_1 = (unsigned char)64;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3143181170310140928LL;
unsigned char var_4 = (unsigned char)88;
unsigned char var_5 = (unsigned char)44;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1971925493333041290LL;
_Bool var_8 = (_Bool)0;
short var_10 = (short)20515;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -862311407;
unsigned int var_13 = 1691454967U;
unsigned char var_14 = (unsigned char)55;
unsigned int var_15 = 1393933024U;
long long int var_16 = 8935939248067353534LL;
unsigned int var_17 = 2046790202U;
unsigned int var_18 = 1209128500U;
unsigned int var_19 = 3252058492U;
unsigned long long int var_20 = 10571978629464024879ULL;
unsigned char var_21 = (unsigned char)24;
short var_22 = (short)-17325;
unsigned char var_23 = (unsigned char)167;
_Bool var_24 = (_Bool)1;
short var_25 = (short)23460;
signed char var_26 = (signed char)28;
long long int var_27 = -3855784908732060615LL;
unsigned char var_28 = (unsigned char)15;
unsigned long long int var_29 = 6554654002229667485ULL;
short var_30 = (short)3330;
unsigned short var_31 = (unsigned short)1435;
long long int var_32 = 3884983947756386732LL;
short var_33 = (short)-16039;
unsigned short var_34 = (unsigned short)23664;
int var_35 = 17970951;
unsigned long long int var_36 = 2292523429206906684ULL;
_Bool var_37 = (_Bool)1;
unsigned int var_38 = 2180699251U;
unsigned short var_39 = (unsigned short)58093;
unsigned short var_40 = (unsigned short)35152;
int var_41 = 1431652297;
unsigned short var_42 = (unsigned short)9396;
short var_43 = (short)-30290;
int var_44 = 691304393;
unsigned char var_45 = (unsigned char)231;
unsigned short var_46 = (unsigned short)25001;
int var_47 = 2021095940;
unsigned int var_48 = 2081552790U;
unsigned short var_49 = (unsigned short)32448;
unsigned char var_50 = (unsigned char)33;
signed char var_51 = (signed char)-24;
int var_52 = 163695428;
unsigned short var_53 = (unsigned short)5815;
short var_54 = (short)4121;
unsigned short var_55 = (unsigned short)57773;
long long int var_56 = -4198428881093596724LL;
int var_57 = 1161483558;
unsigned short var_58 = (unsigned short)57240;
unsigned int var_59 = 1238959355U;
long long int var_60 = -2252728467130270871LL;
signed char var_61 = (signed char)-86;
short var_62 = (short)8478;
_Bool var_63 = (_Bool)0;
long long int var_64 = -3031635475105607945LL;
unsigned char var_65 = (unsigned char)170;
long long int var_66 = 2733732477746597127LL;
unsigned int var_67 = 721985023U;
int var_68 = -1522333827;
unsigned short var_69 = (unsigned short)18622;
unsigned short var_70 = (unsigned short)47921;
unsigned short var_71 = (unsigned short)14827;
int var_72 = -314793827;
unsigned char var_73 = (unsigned char)105;
_Bool var_74 = (_Bool)0;
unsigned char var_75 = (unsigned char)153;
_Bool var_76 = (_Bool)0;
unsigned int var_77 = 2353596022U;
_Bool var_78 = (_Bool)1;
unsigned char var_79 = (unsigned char)19;
unsigned short arr_6 [22] [22] [22] [22] ;
int arr_7 [22] [22] [22] [22] ;
long long int arr_8 [22] [22] [22] [22] [22] [22] ;
_Bool arr_12 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_13 [24] ;
_Bool arr_14 [24] ;
unsigned int arr_15 [24] ;
long long int arr_16 [24] ;
_Bool arr_17 [24] ;
long long int arr_19 [24] ;
int arr_20 [24] [24] ;
long long int arr_21 [24] [24] ;
unsigned int arr_22 [24] [24] [24] [24] ;
unsigned int arr_23 [24] [24] [24] [24] ;
signed char arr_24 [24] [24] [24] ;
long long int arr_25 [24] [24] [24] [24] ;
int arr_26 [24] ;
unsigned int arr_28 [24] [24] [24] [24] [24] ;
unsigned long long int arr_29 [24] [24] ;
int arr_30 [24] [24] [24] [24] [24] [24] [24] ;
unsigned short arr_31 [24] [24] [24] [24] [24] ;
unsigned int arr_32 [24] [24] [24] [24] ;
_Bool arr_34 [24] [24] [24] ;
unsigned short arr_37 [24] [24] [24] [24] [24] [24] [24] ;
unsigned short arr_38 [24] [24] [24] [24] ;
long long int arr_39 [24] [24] [24] [24] [24] ;
_Bool arr_42 [24] [24] [24] [24] [24] [24] ;
unsigned short arr_43 [24] [24] [24] [24] [24] ;
int arr_45 [24] [24] [24] [24] [24] ;
unsigned long long int arr_47 [24] [24] [24] [24] [24] [24] [24] ;
unsigned char arr_55 [24] [24] [24] ;
unsigned long long int arr_58 [24] ;
int arr_60 [24] [24] [24] [24] ;
short arr_63 [24] [24] [24] ;
unsigned char arr_65 [24] [24] [24] [24] ;
unsigned char arr_66 [24] [24] [24] ;
signed char arr_67 [24] [24] [24] [24] ;
_Bool arr_73 [24] [24] ;
unsigned long long int arr_76 [24] [24] [24] ;
int arr_84 [24] [24] [24] [24] [24] ;
int arr_88 [25] [25] ;
unsigned char arr_89 [25] [25] ;
unsigned char arr_90 [25] ;
unsigned short arr_92 [25] [25] [25] ;
unsigned short arr_93 [25] ;
unsigned int arr_94 [25] ;
_Bool arr_95 [25] ;
_Bool arr_96 [25] [25] [25] ;
long long int arr_98 [25] [25] ;
int arr_99 [25] [25] ;
short arr_100 [25] ;
signed char arr_101 [25] [25] ;
short arr_106 [25] [25] [25] [25] ;
int arr_108 [25] [25] ;
long long int arr_109 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_110 [25] [25] [25] ;
unsigned char arr_111 [25] ;
unsigned long long int arr_112 [25] [25] [25] [25] [25] ;
unsigned int arr_10 [22] [22] ;
int arr_40 [24] [24] [24] [24] [24] ;
int arr_41 [24] [24] [24] [24] [24] [24] ;
long long int arr_44 [24] ;
int arr_49 [24] [24] [24] ;
unsigned long long int arr_52 [24] [24] [24] [24] ;
_Bool arr_53 [24] [24] ;
unsigned char arr_56 [24] [24] ;
unsigned int arr_57 [24] [24] [24] ;
unsigned short arr_68 [24] ;
_Bool arr_71 [24] ;
unsigned int arr_74 [24] [24] ;
unsigned short arr_91 [25] ;
short arr_97 [25] ;
unsigned short arr_102 [25] [25] [25] [25] ;
unsigned int arr_107 [25] [25] [25] [25] ;
int arr_114 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_115 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)19401 : (unsigned short)44331;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -256089477;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -5113810112831491311LL : -7139060766128514808LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 16085983380393027909ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4284633189U : 1615679510U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 4535268455361143637LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 7819205617594738441LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = -1607063641;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 4145386419122972599LL : 8198101089924470368LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 154261770U : 613035725U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 1464775026U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = -8161728383035353066LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 2057991481;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 2805644194U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? 9539816729117400179ULL : 7923478239952456017ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? -1884342039 : -1110460200;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)7368 : (unsigned short)6179;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 2723621314U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned short)60401 : (unsigned short)53176;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21583;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = -7970715618449351665LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)34189;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -247527145 : 2095490903;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 458259699190318229ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_58 [i_0] = 7864310272632827638ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = 1479158363;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (short)-14053;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_73 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10475111239814453512ULL : 4828058745025350026ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 455987944 : 135200544;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_88 [i_0] [i_1] = -979930058;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_89 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)107 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_90 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_92 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)58060 : (unsigned short)49122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_93 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51168 : (unsigned short)4424;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_94 [i_0] = (i_0 % 2 == 0) ? 158836033U : 1660691294U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_95 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_96 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_98 [i_0] [i_1] = 379806330789987956LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_99 [i_0] [i_1] = 1890779975;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_100 [i_0] = (i_0 % 2 == 0) ? (short)-14618 : (short)-3139;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_101 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)-121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_106 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-1779 : (short)10896;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_108 [i_0] [i_1] = -677318876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_109 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -4857227244571653469LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_110 [i_0] [i_1] [i_2] = (unsigned short)33967;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_111 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_112 [i_0] [i_1] [i_2] [i_3] [i_4] = 9776967655397584139ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 2058399498U : 2106249039U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 566608217 : -330432168;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -928132290 : 105293011;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 4392499763115918264LL : -8287294187480368619LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 101975655 : -1648636596;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 16644098435236264515ULL : 14805404914441122828ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_53 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)222 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 415585519U : 2967740501U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45606 : (unsigned short)27906;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_71 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_74 [i_0] [i_1] = (i_0 % 2 == 0) ? 2140768239U : 2843384427U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_91 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1763 : (unsigned short)29622;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_97 [i_0] = (i_0 % 2 == 0) ? (short)-6823 : (short)-19540;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_102 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)62065 : (unsigned short)8728;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_107 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 159045017U : 1676662076U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_114 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 332313096 : -1986940307;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_115 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)134;
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
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_49 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_71 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_74 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_97 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_102 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_107 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_114 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_115 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
