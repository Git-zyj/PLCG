#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3598215508U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 6612508041430979997ULL;
int var_3 = -1025266147;
unsigned long long int var_4 = 15854836953051018594ULL;
short var_5 = (short)-598;
_Bool var_6 = (_Bool)1;
int var_7 = 1199930078;
int var_8 = 1629916341;
unsigned short var_9 = (unsigned short)36931;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)29;
unsigned char var_12 = (unsigned char)74;
unsigned long long int var_13 = 15943847086688698089ULL;
long long int var_14 = -1310835651883479275LL;
unsigned short var_15 = (unsigned short)48988;
long long int var_16 = 6255480633885114843LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 184777819U;
short var_19 = (short)14803;
unsigned long long int var_20 = 13543175149862010942ULL;
long long int var_21 = 1336236842980937613LL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 899101486U;
unsigned long long int var_24 = 13104963241195575890ULL;
long long int var_25 = 6235353746492915566LL;
signed char var_26 = (signed char)-88;
signed char var_27 = (signed char)-35;
unsigned int var_28 = 3775022484U;
unsigned long long int var_29 = 5097112609504826179ULL;
unsigned int var_30 = 3847420359U;
unsigned long long int var_31 = 8734016544121096006ULL;
unsigned long long int var_32 = 9568729227683146729ULL;
signed char var_33 = (signed char)-69;
unsigned short var_34 = (unsigned short)47618;
unsigned long long int var_35 = 12373766336354817328ULL;
unsigned short var_36 = (unsigned short)40749;
unsigned int var_37 = 3721782910U;
long long int var_38 = -3840648470425519323LL;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)61;
long long int var_41 = -6854746414078104898LL;
signed char var_42 = (signed char)-120;
unsigned int var_43 = 54978781U;
signed char var_44 = (signed char)-93;
_Bool var_45 = (_Bool)1;
unsigned long long int var_46 = 4550390194877904974ULL;
long long int var_47 = 3657719758200518834LL;
unsigned long long int var_48 = 18291208354280749825ULL;
unsigned short var_49 = (unsigned short)56322;
signed char var_50 = (signed char)105;
unsigned short var_51 = (unsigned short)17772;
unsigned short var_52 = (unsigned short)2428;
int var_53 = -1890487966;
short var_54 = (short)-7122;
unsigned long long int var_55 = 17607394285698388930ULL;
unsigned short var_56 = (unsigned short)22064;
unsigned int var_57 = 1290294321U;
signed char var_58 = (signed char)47;
_Bool var_59 = (_Bool)0;
unsigned long long int var_60 = 10425583289897728540ULL;
int var_61 = 459965112;
signed char var_62 = (signed char)70;
_Bool var_63 = (_Bool)1;
unsigned char var_64 = (unsigned char)231;
signed char var_65 = (signed char)(-127 - 1);
unsigned char var_66 = (unsigned char)217;
unsigned int var_67 = 1481398527U;
short var_68 = (short)9792;
int var_69 = -1745537583;
int var_70 = -92651289;
unsigned short var_71 = (unsigned short)17078;
unsigned long long int var_72 = 10073625227258822669ULL;
unsigned int var_73 = 1927428139U;
long long int var_74 = -7346598314434921500LL;
int var_75 = 1366325235;
int var_76 = -705035465;
unsigned int var_77 = 3537267699U;
unsigned int var_78 = 1500813103U;
unsigned short var_79 = (unsigned short)36973;
long long int var_80 = -5244274742371698619LL;
signed char var_81 = (signed char)-59;
unsigned short var_82 = (unsigned short)39571;
signed char var_83 = (signed char)51;
signed char var_84 = (signed char)-101;
unsigned int var_85 = 1651073466U;
_Bool var_86 = (_Bool)0;
unsigned long long int var_87 = 6999242543329828431ULL;
unsigned int arr_1 [11] ;
long long int arr_2 [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] ;
unsigned long long int arr_17 [12] ;
_Bool arr_19 [12] [12] [12] ;
_Bool arr_21 [12] [12] [12] [12] ;
unsigned char arr_23 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_24 [12] [12] [12] ;
signed char arr_25 [12] [12] [12] [12] ;
unsigned short arr_26 [12] [12] [12] [12] [12] ;
unsigned int arr_27 [12] [12] [12] [12] [12] ;
unsigned char arr_30 [12] [12] ;
signed char arr_32 [12] [12] [12] ;
signed char arr_35 [12] ;
unsigned short arr_40 [12] [12] ;
unsigned int arr_43 [12] [12] [12] [12] ;
long long int arr_44 [12] [12] [12] ;
unsigned int arr_46 [12] [12] ;
unsigned short arr_57 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_59 [12] [12] [12] [12] ;
unsigned int arr_62 [12] [12] ;
int arr_69 [12] [12] [12] [12] ;
int arr_86 [25] ;
int arr_87 [25] [25] [25] ;
unsigned int arr_90 [25] [25] [25] ;
unsigned short arr_91 [25] [25] ;
long long int arr_92 [25] ;
unsigned int arr_94 [25] [25] [25] ;
unsigned char arr_95 [25] [25] ;
long long int arr_96 [25] ;
signed char arr_97 [25] [25] ;
unsigned int arr_98 [25] [25] [25] [25] ;
long long int arr_99 [25] [25] [25] [25] ;
long long int arr_100 [25] [25] [25] [25] ;
unsigned short arr_101 [25] [25] [25] [25] ;
_Bool arr_102 [25] [25] [25] ;
unsigned long long int arr_104 [25] ;
long long int arr_106 [25] [25] [25] ;
int arr_107 [25] [25] [25] ;
unsigned short arr_112 [25] [25] [25] ;
unsigned short arr_115 [25] [25] [25] [25] [25] ;
unsigned int arr_118 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 866706140U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -6412226951251678189LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 16734401663972196886ULL : 15800927653938715698ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 14535524213661201186ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)56456;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 3245629185U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (signed char)2 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)39806;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 2247331787U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 47379226659924842LL : -7364874854404170242LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_46 [i_0] [i_1] = 3670145773U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)43425 : (unsigned short)25945;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = 3711373680U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_62 [i_0] [i_1] = 2568759798U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_69 [i_0] [i_1] [i_2] [i_3] = 1421225559;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_86 [i_0] = -1349807192;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1438637773 : 46636558;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_90 [i_0] [i_1] [i_2] = 3469389357U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_91 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)62973 : (unsigned short)50419;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_92 [i_0] = (i_0 % 2 == 0) ? 5892465195818966055LL : 3860108309329451173LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_94 [i_0] [i_1] [i_2] = 3115210956U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_95 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_96 [i_0] = 2861097164581561456LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_97 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-33 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_98 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 902461077U : 2065376882U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_99 [i_0] [i_1] [i_2] [i_3] = 5397602009314484659LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_100 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2402429475325775755LL : -6173582606716430518LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_101 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)62815 : (unsigned short)44502;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_102 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_104 [i_0] = 6651521435784421929ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_106 [i_0] [i_1] [i_2] = -4406589965158923437LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_107 [i_0] [i_1] [i_2] = -540899102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_112 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)44361 : (unsigned short)21764;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_115 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)25377;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_118 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 550617188U;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
