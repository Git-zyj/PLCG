#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34470;
unsigned short var_1 = (unsigned short)14121;
long long int var_3 = -7123381879615831384LL;
unsigned long long int var_4 = 6542863557549474644ULL;
unsigned long long int var_5 = 13470289964354012327ULL;
signed char var_6 = (signed char)-41;
unsigned long long int var_7 = 17059924435140665384ULL;
unsigned char var_8 = (unsigned char)73;
long long int var_9 = -5120485426949893845LL;
unsigned char var_10 = (unsigned char)143;
int zero = 0;
unsigned short var_11 = (unsigned short)49859;
unsigned long long int var_12 = 4828017311303137753ULL;
unsigned char var_13 = (unsigned char)194;
unsigned int var_14 = 1201161636U;
unsigned char var_15 = (unsigned char)73;
long long int var_16 = 5560928761700446874LL;
unsigned int var_17 = 234548005U;
unsigned char var_18 = (unsigned char)224;
long long int var_19 = -2099365544681221827LL;
unsigned char var_20 = (unsigned char)173;
int var_21 = 1903725297;
unsigned short var_22 = (unsigned short)13614;
unsigned short var_23 = (unsigned short)18192;
short var_24 = (short)-27466;
int var_25 = -250633913;
unsigned short var_26 = (unsigned short)37476;
long long int var_27 = 3333769678852324806LL;
int var_28 = -1445365873;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)251;
unsigned short var_31 = (unsigned short)41353;
short var_32 = (short)8575;
int var_33 = 1458838008;
unsigned int var_34 = 3896808521U;
long long int var_35 = -6685393445903881526LL;
short var_36 = (short)11636;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)60529;
short var_39 = (short)-25344;
unsigned long long int var_40 = 1080480927999765187ULL;
_Bool var_41 = (_Bool)0;
short var_42 = (short)24857;
unsigned int var_43 = 1374685841U;
short var_44 = (short)-28162;
long long int var_45 = 1163091529599371141LL;
signed char var_46 = (signed char)-53;
short var_47 = (short)-24418;
unsigned int var_48 = 1507814380U;
unsigned long long int var_49 = 14547631293978478960ULL;
unsigned short var_50 = (unsigned short)10715;
unsigned long long int var_51 = 14481610166481575078ULL;
short var_52 = (short)-8527;
short var_53 = (short)14900;
signed char var_54 = (signed char)116;
unsigned int var_55 = 3021677387U;
unsigned long long int var_56 = 5194345044497043634ULL;
int var_57 = 1622193589;
unsigned long long int var_58 = 6134033622915793014ULL;
unsigned short var_59 = (unsigned short)52505;
unsigned int var_60 = 152841687U;
unsigned char var_61 = (unsigned char)172;
_Bool var_62 = (_Bool)1;
int var_63 = -44512896;
long long int var_64 = 3210095754285410123LL;
int var_65 = -2010947342;
unsigned char var_66 = (unsigned char)97;
long long int var_67 = 9144745062667742803LL;
unsigned long long int var_68 = 4642481597381063423ULL;
unsigned short var_69 = (unsigned short)20902;
int var_70 = 2016393906;
short var_71 = (short)-31814;
_Bool var_72 = (_Bool)1;
unsigned int var_73 = 2678778048U;
unsigned long long int var_74 = 12263263334905620289ULL;
long long int var_75 = 4114865320595990534LL;
unsigned long long int var_76 = 12451658387116087122ULL;
unsigned short var_77 = (unsigned short)8831;
unsigned int var_78 = 3976117021U;
int var_79 = -255192039;
_Bool var_80 = (_Bool)1;
unsigned char var_81 = (unsigned char)69;
signed char var_82 = (signed char)-70;
unsigned short var_83 = (unsigned short)30294;
int var_84 = -2139652175;
unsigned long long int arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
int arr_4 [12] [12] [12] ;
short arr_5 [12] [12] ;
unsigned long long int arr_6 [12] ;
unsigned int arr_7 [12] [12] ;
unsigned char arr_8 [12] [12] ;
unsigned short arr_9 [12] [12] [12] [12] [12] ;
unsigned char arr_11 [12] [12] [12] [12] [12] ;
int arr_12 [12] [12] [12] [12] [12] ;
unsigned int arr_13 [12] [12] ;
unsigned char arr_14 [12] [12] [12] ;
short arr_15 [12] [12] [12] ;
_Bool arr_16 [12] [12] ;
unsigned short arr_19 [12] [12] [12] ;
long long int arr_20 [12] [12] [12] [12] ;
unsigned int arr_21 [12] ;
long long int arr_23 [12] [12] [12] [12] [12] ;
unsigned short arr_27 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_28 [12] [12] [12] [12] [12] ;
unsigned long long int arr_29 [12] [12] ;
unsigned long long int arr_30 [12] [12] [12] ;
unsigned char arr_32 [12] [12] ;
unsigned short arr_33 [12] ;
short arr_35 [12] ;
unsigned char arr_36 [12] ;
_Bool arr_37 [12] ;
unsigned long long int arr_40 [12] [12] ;
unsigned short arr_46 [12] [12] [12] ;
unsigned char arr_49 [12] [12] [12] ;
unsigned long long int arr_54 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_57 [12] [12] [12] ;
_Bool arr_62 [12] ;
unsigned int arr_64 [12] ;
unsigned long long int arr_68 [12] [12] [12] [12] ;
unsigned short arr_74 [23] [23] ;
unsigned short arr_75 [23] ;
long long int arr_76 [23] ;
unsigned char arr_79 [23] ;
unsigned int arr_82 [23] [23] [23] ;
unsigned char arr_85 [23] [23] [23] ;
unsigned long long int arr_86 [23] [23] [23] ;
unsigned short arr_87 [23] [23] [23] [23] ;
unsigned short arr_90 [23] [23] [23] [23] ;
int arr_91 [23] [23] [23] [23] ;
unsigned int arr_94 [23] [23] [23] ;
unsigned long long int arr_95 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 8417379227601075582ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1311970580605405914LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)24595;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 565788263;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)1883;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 17216945780643443771ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 626757409U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)23133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1890472449;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = 3009492667U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)3416;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)60690;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 2340956023086521068LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 2635481525U : 802934233U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -5676573331678302881LL : 4994207691096155451LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)31937;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 5103527947324225924ULL : 8515747881174997898ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = 13164523366352541970ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2558006042022026957ULL : 18133794662520999928ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_33 [i_0] = (unsigned short)5166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_35 [i_0] = (short)-16511;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_40 [i_0] [i_1] = 918338197891552924ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned short)16595;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5715867575881291050ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = 3537700588U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_62 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_64 [i_0] = 3999948804U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 17103932498876231202ULL : 3406468724976013067ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_74 [i_0] [i_1] = (unsigned short)33756;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_75 [i_0] = (unsigned short)17394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_76 [i_0] = 5478514217271339359LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_79 [i_0] = (i_0 % 2 == 0) ? (unsigned char)46 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_82 [i_0] [i_1] [i_2] = 1116269795U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_85 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = 5869648811197309596ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_87 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27730;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)28721 : (unsigned short)55160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 151937565 : 425002215;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_94 [i_0] [i_1] [i_2] = 3926773853U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_95 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 8210830420127241698ULL : 6090938421666284092ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
