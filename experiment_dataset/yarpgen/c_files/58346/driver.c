#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6132969716765369391LL;
unsigned short var_3 = (unsigned short)20673;
unsigned int var_4 = 3777331566U;
unsigned short var_5 = (unsigned short)40589;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2487425228812524112LL;
int var_9 = -1466130870;
_Bool var_10 = (_Bool)1;
short var_11 = (short)26349;
unsigned long long int var_12 = 17711069116023024838ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 1334511860;
signed char var_15 = (signed char)114;
unsigned short var_16 = (unsigned short)32651;
long long int var_17 = -5556099505762272544LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -867954788;
unsigned long long int var_20 = 8929800282040355377ULL;
unsigned short var_21 = (unsigned short)40885;
unsigned char var_22 = (unsigned char)127;
unsigned short var_23 = (unsigned short)6519;
signed char var_24 = (signed char)-116;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)60755;
int var_27 = 242373263;
short var_28 = (short)-32713;
int var_29 = -1469730610;
unsigned char var_30 = (unsigned char)227;
unsigned short var_31 = (unsigned short)41591;
unsigned int var_32 = 3186304354U;
int var_33 = 1628230335;
long long int var_34 = 7236451311032411784LL;
unsigned int var_35 = 2050208579U;
signed char var_36 = (signed char)95;
short var_37 = (short)21116;
unsigned long long int var_38 = 16778418151772753871ULL;
unsigned char var_39 = (unsigned char)230;
int var_40 = -374316835;
_Bool var_41 = (_Bool)1;
short var_42 = (short)-12874;
long long int var_43 = -4129541282534241947LL;
_Bool var_44 = (_Bool)0;
unsigned short var_45 = (unsigned short)15465;
long long int var_46 = -4302973437736432832LL;
signed char var_47 = (signed char)-116;
long long int var_48 = 114042430114987641LL;
int var_49 = 2096648911;
unsigned long long int var_50 = 8918069858659034131ULL;
unsigned short var_51 = (unsigned short)677;
short var_52 = (short)-23688;
signed char var_53 = (signed char)-92;
int var_54 = 1776479720;
unsigned long long int var_55 = 12798228584590494951ULL;
unsigned short var_56 = (unsigned short)52046;
unsigned long long int var_57 = 11586936762861291580ULL;
unsigned short var_58 = (unsigned short)35006;
unsigned short var_59 = (unsigned short)5499;
unsigned short var_60 = (unsigned short)35330;
unsigned short var_61 = (unsigned short)60859;
unsigned int var_62 = 2041237290U;
unsigned long long int var_63 = 5168480438334230407ULL;
unsigned short var_64 = (unsigned short)13769;
unsigned int var_65 = 977408585U;
unsigned int var_66 = 3077840052U;
_Bool var_67 = (_Bool)0;
unsigned int var_68 = 930151412U;
int var_69 = 563232854;
int var_70 = 992502181;
int var_71 = -324820469;
long long int var_72 = 7833419241661586928LL;
unsigned char var_73 = (unsigned char)243;
unsigned int var_74 = 1394892448U;
unsigned short var_75 = (unsigned short)17961;
long long int var_76 = -364113258788479359LL;
_Bool var_77 = (_Bool)1;
signed char var_78 = (signed char)-40;
_Bool var_79 = (_Bool)0;
unsigned int var_80 = 1942162178U;
unsigned short var_81 = (unsigned short)36708;
unsigned long long int var_82 = 17646707113324748163ULL;
_Bool var_83 = (_Bool)1;
unsigned int var_84 = 1386095516U;
unsigned short var_85 = (unsigned short)41386;
long long int var_86 = 7581923458866048710LL;
short var_87 = (short)-16189;
unsigned short var_88 = (unsigned short)32875;
unsigned long long int var_89 = 9392594770776667896ULL;
long long int var_90 = -3049193000105918067LL;
unsigned int var_91 = 3684336769U;
int var_92 = -1834848350;
short var_93 = (short)-13827;
unsigned char var_94 = (unsigned char)213;
int var_95 = -1288315215;
unsigned int arr_3 [17] [17] [17] ;
signed char arr_6 [14] ;
unsigned char arr_8 [14] [14] [14] ;
_Bool arr_10 [14] [14] [14] ;
unsigned short arr_12 [14] [14] [14] ;
unsigned char arr_13 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_14 [14] [14] [14] ;
unsigned long long int arr_15 [14] [14] ;
unsigned int arr_16 [14] [14] [14] [14] ;
unsigned int arr_17 [14] ;
unsigned short arr_20 [14] [14] [14] ;
int arr_23 [14] [14] [14] [14] ;
signed char arr_25 [14] [14] [14] [14] ;
int arr_26 [14] [14] [14] [14] [14] ;
unsigned long long int arr_30 [14] [14] [14] [14] ;
unsigned short arr_34 [14] [14] [14] [14] [14] ;
unsigned int arr_37 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_38 [14] [14] ;
signed char arr_39 [14] [14] [14] [14] ;
unsigned int arr_40 [14] ;
int arr_43 [14] ;
unsigned short arr_45 [14] ;
long long int arr_46 [14] [14] [14] ;
unsigned int arr_49 [14] ;
long long int arr_50 [14] [14] [14] [14] ;
long long int arr_52 [14] [14] ;
unsigned char arr_59 [14] [14] [14] [14] ;
long long int arr_62 [14] [14] ;
unsigned int arr_71 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_74 [14] [14] ;
signed char arr_79 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_83 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3075229946U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)95 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)42678;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)13 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 10257557513374039638ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1431783300U : 2723145741U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 3479085338U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)39246;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 291013109;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 781254040;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 12923740325025321058ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)35360;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3375151703U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_38 [i_0] [i_1] = 1669940719U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_40 [i_0] = 3746969993U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = -606632073;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54113 : (unsigned short)5186;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = -6372085437326129343LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_49 [i_0] = 914449250U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = -2708227109485574654LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_52 [i_0] [i_1] = 7696276864077175400LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_62 [i_0] [i_1] = (i_1 % 2 == 0) ? -1828875876468012289LL : -8654677332877671549LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1804114256U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_74 [i_0] [i_1] = 13981840458253957419ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_83 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 17812347296493501318ULL : 11244563952844477212ULL;
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
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
