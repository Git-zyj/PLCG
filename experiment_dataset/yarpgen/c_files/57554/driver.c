#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1436292948;
unsigned short var_1 = (unsigned short)31787;
long long int var_2 = -47442077105251792LL;
unsigned int var_3 = 4141022390U;
unsigned long long int var_4 = 15958176234200911879ULL;
unsigned long long int var_5 = 4349360907764097387ULL;
unsigned int var_6 = 2801491317U;
short var_7 = (short)-7205;
short var_8 = (short)-9661;
int var_9 = -1383414516;
int var_12 = -1562538249;
unsigned char var_13 = (unsigned char)147;
unsigned short var_15 = (unsigned short)29431;
signed char var_16 = (signed char)115;
int zero = 0;
signed char var_17 = (signed char)91;
unsigned long long int var_18 = 17584983680771761652ULL;
short var_19 = (short)-29125;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3785046558157835293LL;
unsigned long long int var_22 = 13492587975647323391ULL;
unsigned int var_23 = 3253362177U;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
short var_26 = (short)32615;
int var_27 = 1052300647;
long long int var_28 = 8062804382654406765LL;
short var_29 = (short)-24652;
unsigned int var_30 = 3720150079U;
unsigned long long int var_31 = 13737886723020105056ULL;
long long int var_32 = 8956570258901307499LL;
unsigned short var_33 = (unsigned short)11330;
short var_34 = (short)-6368;
unsigned int var_35 = 1722694664U;
unsigned char var_36 = (unsigned char)6;
unsigned long long int var_37 = 7135580676151933130ULL;
long long int var_38 = -1249973131724402741LL;
signed char var_39 = (signed char)40;
unsigned int var_40 = 4217200484U;
unsigned long long int var_41 = 17783795964568001948ULL;
_Bool var_42 = (_Bool)0;
_Bool var_43 = (_Bool)0;
unsigned char var_44 = (unsigned char)254;
_Bool var_45 = (_Bool)1;
signed char var_46 = (signed char)-58;
signed char var_47 = (signed char)47;
unsigned short var_48 = (unsigned short)57797;
unsigned char var_49 = (unsigned char)201;
long long int var_50 = -7464010778161529268LL;
unsigned int var_51 = 2458100453U;
int var_52 = -923788515;
short var_53 = (short)-3273;
_Bool var_54 = (_Bool)1;
unsigned long long int var_55 = 9565618718758153805ULL;
unsigned int var_56 = 4173897956U;
unsigned long long int var_57 = 9258645025508599119ULL;
unsigned short var_58 = (unsigned short)41633;
long long int var_59 = -1661584735747405258LL;
short var_60 = (short)-18233;
unsigned int var_61 = 2670009431U;
unsigned char var_62 = (unsigned char)27;
_Bool var_63 = (_Bool)0;
long long int var_64 = -6542166676710872577LL;
unsigned short var_65 = (unsigned short)26379;
unsigned char var_66 = (unsigned char)193;
long long int var_67 = 7374051603086798281LL;
long long int var_68 = -7559129915027630684LL;
unsigned char var_69 = (unsigned char)200;
unsigned short var_70 = (unsigned short)37380;
_Bool arr_0 [16] ;
unsigned int arr_1 [16] ;
short arr_2 [16] ;
int arr_3 [16] [16] ;
long long int arr_4 [16] [16] ;
unsigned char arr_5 [16] [16] [16] ;
short arr_6 [16] [16] [16] [16] ;
long long int arr_7 [16] [16] [16] [16] ;
_Bool arr_10 [19] [19] ;
unsigned long long int arr_11 [19] ;
unsigned int arr_12 [19] [19] ;
signed char arr_13 [19] [19] ;
unsigned int arr_14 [19] [19] [19] ;
long long int arr_17 [19] [19] [19] [19] ;
_Bool arr_18 [19] [19] [19] [19] ;
unsigned long long int arr_19 [19] ;
unsigned short arr_20 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_21 [19] [19] [19] [19] [19] [19] ;
long long int arr_22 [19] [19] [19] ;
unsigned short arr_25 [19] ;
short arr_26 [19] ;
_Bool arr_27 [19] [19] [19] ;
unsigned char arr_29 [19] [19] [19] ;
unsigned int arr_32 [19] ;
signed char arr_33 [19] [19] [19] ;
int arr_34 [19] ;
unsigned int arr_35 [19] [19] ;
long long int arr_39 [12] [12] ;
int arr_41 [12] ;
signed char arr_43 [12] [12] [12] ;
unsigned int arr_47 [12] [12] [12] [12] ;
short arr_48 [12] [12] [12] [12] ;
long long int arr_49 [12] [12] ;
unsigned long long int arr_51 [12] [12] [12] [12] [12] [12] ;
int arr_53 [12] [12] [12] [12] [12] ;
unsigned long long int arr_54 [12] [12] [12] [12] [12] ;
int arr_58 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_59 [12] [12] [12] [12] ;
unsigned char arr_60 [12] [12] ;
unsigned int arr_75 [12] [12] ;
short arr_78 [12] [12] [12] [12] [12] [12] [12] ;
unsigned char arr_83 [12] [12] [12] [12] [12] [12] [12] ;
signed char arr_85 [12] [12] [12] [12] [12] [12] ;
signed char arr_86 [12] [12] [12] [12] ;
signed char arr_88 [12] ;
signed char arr_91 [12] [12] [12] [12] ;
long long int arr_92 [12] [12] [12] ;
int arr_95 [12] [12] [12] ;
unsigned long long int arr_98 [12] [12] ;
unsigned int arr_9 [16] [16] ;
unsigned short arr_16 [19] ;
unsigned short arr_23 [19] [19] [19] [19] ;
unsigned int arr_24 [19] [19] [19] [19] ;
long long int arr_30 [19] [19] [19] ;
_Bool arr_31 [19] [19] [19] ;
unsigned long long int arr_36 [19] ;
unsigned short arr_37 [19] ;
unsigned short arr_40 [12] ;
unsigned int arr_55 [12] [12] [12] [12] [12] ;
unsigned long long int arr_56 [12] [12] [12] [12] [12] [12] [12] ;
unsigned short arr_57 [12] [12] ;
short arr_61 [12] [12] [12] [12] ;
signed char arr_64 [12] [12] [12] ;
unsigned int arr_65 [12] [12] [12] [12] ;
int arr_66 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_67 [12] [12] [12] [12] ;
unsigned char arr_68 [12] [12] ;
long long int arr_71 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_74 [12] [12] [12] [12] [12] ;
unsigned int arr_79 [12] [12] [12] [12] [12] ;
unsigned long long int arr_84 [12] ;
_Bool arr_87 [12] ;
int arr_90 [12] [12] [12] [12] ;
signed char arr_99 [12] [12] [12] [12] ;
unsigned char arr_103 [12] [12] [12] [12] ;
unsigned int arr_108 [12] [12] [12] ;
unsigned short arr_109 [12] [12] [12] [12] ;
unsigned char arr_112 [12] [12] ;
signed char arr_113 [12] [12] ;
unsigned int arr_114 [12] [12] ;
unsigned char arr_115 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1829918867U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-5573 : (short)1501;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 350633405 : 134833446;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -3810454475597175964LL : -3477729092625959754LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)204 : (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-14508 : (short)-12205;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4002884239523289143LL : 8835205232941782564LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 3491335488120893038ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 1566176294U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1734339464U : 2686342679U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -6881616894350085168LL : 973733440825067973LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 5331586101783902264ULL : 5069124611915703485ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)43366 : (unsigned short)59160;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)37044 : (unsigned short)61976;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8803324739596807686LL : 1827361684771774295LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (unsigned short)7477;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (short)31576;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 1273405327U : 885661913U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)73 : (signed char)-32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? -828434788 : 1443758421;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? 853180493U : 4231974796U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = -1520380695774070116LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_41 [i_0] = -1207826284;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 4005619962U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (short)-4394;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_49 [i_0] [i_1] = -2475282982715548249LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 11114076761457412937ULL : 1905200507004734869ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = 1481108957;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = 14518907170174222030ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1945469165;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = 1804081571U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_60 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_75 [i_0] [i_1] = (i_1 % 2 == 0) ? 435623159U : 2185524083U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (short)-19280 : (short)11097;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_83 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned char)227 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_86 [i_0] [i_1] [i_2] [i_3] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_88 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_92 [i_0] [i_1] [i_2] = -5686115115925415605LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_95 [i_0] [i_1] [i_2] = 587928919;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_98 [i_0] [i_1] = 7865308328734160003ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 1688651966U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12580 : (unsigned short)51802;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)8449 : (unsigned short)12350;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2047521685U : 3368280481U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 861334386610321567LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 754146037485762508ULL : 13161475744911868831ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = (unsigned short)46441;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_40 [i_0] = (unsigned short)38388;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = 332088147U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6627304087484029594ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned short)43845;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (short)-32279;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)65 : (signed char)114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4159950807U : 3888390487U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1500122235 : -871650569;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)24057 : (unsigned short)38947;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_68 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 5205452960260495442LL : -6071784279328449174LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3318588241U : 2298516157U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3822926954U : 1679528630U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_84 [i_0] = (i_0 % 2 == 0) ? 4700897024282500555ULL : 8510626710058357537ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_87 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = -824548662;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_99 [i_0] [i_1] [i_2] [i_3] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_103 [i_0] [i_1] [i_2] [i_3] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_108 [i_0] [i_1] [i_2] = 3285109216U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_109 [i_0] [i_1] [i_2] [i_3] = (unsigned short)28336;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_112 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_113 [i_0] [i_1] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_114 [i_0] [i_1] = 2807694654U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_115 [i_0] = (unsigned char)25;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_57 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_65 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_68 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_84 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_87 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_90 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_99 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_103 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_108 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_109 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_112 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_113 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_114 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_115 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
