#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2534146576U;
unsigned char var_1 = (unsigned char)2;
long long int var_2 = -58581529675733701LL;
signed char var_4 = (signed char)110;
unsigned long long int var_5 = 13298951559282307390ULL;
unsigned long long int var_6 = 3177574307505825552ULL;
signed char var_7 = (signed char)64;
int var_8 = -285997906;
long long int var_9 = 9032680207360423594LL;
unsigned short var_10 = (unsigned short)47804;
unsigned long long int var_11 = 3308348631972538857ULL;
int var_12 = -1120232036;
signed char var_13 = (signed char)-60;
signed char var_14 = (signed char)-26;
short var_15 = (short)-25703;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2225860617U;
int var_18 = -1018588659;
signed char var_19 = (signed char)69;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)820;
unsigned int var_22 = 608651901U;
long long int var_23 = -272523494046797856LL;
signed char var_24 = (signed char)127;
unsigned long long int var_25 = 12435439546885998802ULL;
long long int var_26 = 957834372453578242LL;
unsigned long long int var_27 = 17747444484455272015ULL;
short var_28 = (short)-31743;
unsigned long long int var_29 = 4718413005667231749ULL;
int var_30 = -1480613059;
unsigned long long int var_31 = 5014903978039975003ULL;
unsigned long long int var_32 = 13309827775831391185ULL;
unsigned long long int var_33 = 10168512917334075760ULL;
signed char var_34 = (signed char)91;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)-7;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 9008183761622957404ULL;
unsigned int var_39 = 2634838565U;
long long int var_40 = 1674157548244423063LL;
long long int var_41 = -7079365415950273346LL;
unsigned int var_42 = 3097233953U;
unsigned int var_43 = 2989098424U;
unsigned short var_44 = (unsigned short)10250;
signed char var_45 = (signed char)61;
short var_46 = (short)-15855;
unsigned long long int var_47 = 6527547686079234064ULL;
unsigned int var_48 = 269582788U;
unsigned long long int arr_0 [10] ;
unsigned short arr_3 [12] ;
_Bool arr_4 [12] ;
unsigned char arr_8 [12] [12] ;
_Bool arr_9 [12] ;
unsigned short arr_10 [12] ;
unsigned long long int arr_11 [12] ;
unsigned int arr_13 [12] ;
short arr_15 [12] ;
unsigned long long int arr_16 [12] [12] ;
unsigned long long int arr_18 [12] ;
short arr_19 [12] [12] [12] [12] ;
unsigned long long int arr_20 [12] [12] ;
unsigned int arr_21 [12] [12] [12] ;
unsigned int arr_22 [12] [12] [12] [12] [12] [12] ;
signed char arr_23 [12] [12] [12] [12] ;
short arr_24 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_25 [12] [12] ;
short arr_26 [12] [12] [12] ;
_Bool arr_27 [12] ;
unsigned long long int arr_29 [12] [12] ;
signed char arr_30 [12] [12] ;
int arr_31 [12] [12] ;
unsigned int arr_32 [12] [12] ;
int arr_34 [12] [12] ;
int arr_35 [12] [12] [12] ;
unsigned short arr_36 [12] ;
signed char arr_39 [12] [12] [12] ;
int arr_40 [12] [12] [12] [12] ;
short arr_41 [12] [12] [12] [12] ;
signed char arr_42 [12] [12] [12] ;
unsigned long long int arr_45 [12] [12] [12] ;
unsigned long long int arr_47 [12] ;
short arr_48 [12] ;
int arr_49 [12] [12] [12] ;
unsigned int arr_50 [12] ;
short arr_51 [12] [12] [12] [12] [12] ;
signed char arr_52 [12] [12] [12] [12] ;
_Bool arr_53 [12] [12] [12] [12] ;
unsigned int arr_55 [12] [12] [12] [12] [12] ;
unsigned short arr_59 [12] [12] [12] [12] ;
_Bool arr_61 [12] [12] [12] [12] [12] ;
_Bool arr_67 [12] [12] [12] [12] ;
unsigned int arr_74 [12] [12] [12] ;
short arr_86 [12] [12] [12] ;
short arr_96 [12] [12] [12] [12] [12] [12] [12] ;
unsigned char arr_100 [12] ;
_Bool arr_108 [12] [12] [12] [12] ;
short arr_133 [12] [12] [12] [12] [12] [12] ;
int arr_2 [10] [10] ;
short arr_5 [12] ;
unsigned long long int arr_6 [12] ;
unsigned long long int arr_7 [12] ;
short arr_12 [12] [12] ;
unsigned long long int arr_28 [12] [12] ;
signed char arr_37 [12] ;
int arr_38 [12] ;
_Bool arr_46 [12] [12] [12] ;
unsigned int arr_56 [12] [12] ;
int arr_57 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_63 [12] [12] [12] ;
unsigned int arr_64 [12] [12] [12] ;
signed char arr_65 [12] [12] [12] ;
unsigned int arr_69 [12] ;
short arr_70 [12] [12] [12] [12] ;
unsigned int arr_71 [12] [12] [12] [12] ;
signed char arr_72 [12] [12] ;
_Bool arr_73 [12] [12] [12] ;
_Bool arr_78 [12] [12] [12] [12] ;
signed char arr_79 [12] [12] ;
signed char arr_80 [12] [12] [12] [12] ;
signed char arr_81 [12] ;
_Bool arr_82 [12] ;
signed char arr_88 [12] [12] [12] [12] ;
int arr_89 [12] ;
signed char arr_90 [12] [12] ;
unsigned long long int arr_95 [12] [12] [12] ;
long long int arr_99 [12] [12] [12] [12] [12] ;
unsigned int arr_104 [12] [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_109 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_112 [12] [12] [12] ;
unsigned int arr_119 [12] [12] [12] [12] [12] [12] ;
_Bool arr_120 [12] [12] [12] [12] ;
signed char arr_123 [12] [12] [12] ;
unsigned int arr_124 [12] [12] [12] ;
unsigned long long int arr_135 [12] [12] [12] [12] [12] ;
short arr_136 [12] [12] ;
short arr_141 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 9339479661793567526ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)63377;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)1820;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 16957870983563634332ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 3557207501U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (short)-14563;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = 6660115123683906392ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 5609336218074568711ULL : 17252909535063679046ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (short)-30587;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 9497020799707633562ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 284325689U : 3503800959U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17046441U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)3178;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)54 : (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)28113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? 616221980370912808ULL : 5892405595117651352ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = -1028060989;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = 3264279885U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? 1561114061 : 1330593429;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = -1103035850;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (unsigned short)3327;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 691424260;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-4560 : (short)-23050;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14433893823900841888ULL : 16865233362827955739ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_47 [i_0] = 4177370852691280775ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_48 [i_0] = (short)-22249;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -408549820 : -1970480457;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_50 [i_0] = 552611256U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)31557 : (short)-19444;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = 1775765044U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11054;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = 974266538U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = (short)5629;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_96 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-15497;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_100 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_108 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_133 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)26903;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -1312168549 : -42021740;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-2696 : (short)27664;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 15568878075960969972ULL : 883187369373171903ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 7894175862723149055ULL : 5653422048603725776ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20354 : (short)523;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 1376551709175469532ULL : 14094680834872215560ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (signed char)60 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 834465531 : 485021634;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? 135666446U : 2338205703U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -51201944 : 625835233;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7569832929362113792ULL : 8041231351729791218ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2934913635U : 2134519947U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_69 [i_0] = (i_0 % 2 == 0) ? 2501884390U : 2579457844U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)29577 : (short)-5931;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4100983117U : 1075590577U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_72 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-72 : (signed char)119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_78 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_79 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-62 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_80 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-110 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_81 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_82 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_88 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-93 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_89 [i_0] = (i_0 % 2 == 0) ? 1623231191 : -1836621642;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_90 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)-47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_95 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4897020653026434689ULL : 4551843907225073634ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_99 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3764238407146644362LL : -4366965742180758987LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_104 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 1081569821U : 2520899717U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_109 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 10179598810659247161ULL : 1124573885556876163ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_112 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 15273999166589812131ULL : 6820813230057478866ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_119 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2329001044U : 1690353264U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_120 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_123 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)7 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_124 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3733461615U : 3806960872U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_135 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 15746454060915070952ULL : 11804571585338957766ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_136 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)6988 : (short)8590;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_141 [i_0] [i_1] = (short)-786;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_63 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_65 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_72 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_73 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_78 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_79 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_80 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_81 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_82 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_88 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_89 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_90 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_95 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_99 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_104 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_109 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_112 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_119 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_120 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_123 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_124 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_135 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_136 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_141 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
