#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35708;
short var_1 = (short)-31086;
int var_2 = -371724817;
unsigned long long int var_4 = 12794917200795430500ULL;
unsigned int var_5 = 267194144U;
long long int var_6 = -3553544549986188779LL;
unsigned long long int var_7 = 10439352165625501817ULL;
unsigned int var_9 = 4231183191U;
unsigned long long int var_10 = 16542946310370155756ULL;
signed char var_12 = (signed char)-74;
unsigned long long int var_13 = 16842046343798224498ULL;
signed char var_14 = (signed char)76;
int zero = 0;
long long int var_15 = 8394685342311078519LL;
unsigned int var_16 = 765194237U;
unsigned int var_17 = 3469407928U;
unsigned short var_18 = (unsigned short)2333;
unsigned short var_19 = (unsigned short)38545;
unsigned long long int var_20 = 6036667586197789038ULL;
unsigned short var_21 = (unsigned short)43996;
int var_22 = -184237675;
unsigned long long int var_23 = 7941125116956700597ULL;
short var_24 = (short)9869;
unsigned int var_25 = 2046537454U;
unsigned char var_26 = (unsigned char)26;
int var_27 = -1560379950;
unsigned short var_28 = (unsigned short)49555;
short var_29 = (short)-31785;
int var_30 = -82249691;
short var_31 = (short)12930;
short var_32 = (short)24808;
signed char var_33 = (signed char)111;
unsigned int var_34 = 1809270380U;
signed char var_35 = (signed char)91;
unsigned long long int var_36 = 11526109410986423809ULL;
unsigned short var_37 = (unsigned short)19942;
long long int var_38 = -1248890370514364162LL;
signed char var_39 = (signed char)33;
short var_40 = (short)10104;
int var_41 = -316381076;
_Bool var_42 = (_Bool)0;
unsigned long long int var_43 = 7626816921243070733ULL;
short var_44 = (short)-1817;
unsigned int var_45 = 1600129079U;
unsigned int var_46 = 1377933760U;
unsigned long long int var_47 = 3280672283196499843ULL;
long long int var_48 = -7620756154763095478LL;
int var_49 = 339303271;
unsigned short var_50 = (unsigned short)33657;
unsigned long long int var_51 = 3285900693441908631ULL;
unsigned long long int var_52 = 7281552439672368843ULL;
signed char var_53 = (signed char)44;
short var_54 = (short)-10622;
signed char var_55 = (signed char)15;
unsigned long long int var_56 = 5254834684031154332ULL;
signed char var_57 = (signed char)-119;
unsigned long long int var_58 = 3883459971417023171ULL;
long long int var_59 = -7102935359999004869LL;
long long int var_60 = -4650229965869269261LL;
signed char var_61 = (signed char)-117;
int var_62 = 1597785982;
unsigned int var_63 = 541025364U;
unsigned int var_64 = 4186193290U;
unsigned long long int var_65 = 11154528219077528073ULL;
unsigned long long int var_66 = 16079589724993329435ULL;
short var_67 = (short)-21004;
unsigned int var_68 = 3011447519U;
short var_69 = (short)-3539;
unsigned char var_70 = (unsigned char)76;
unsigned long long int var_71 = 3372205657779857182ULL;
short var_72 = (short)-25057;
unsigned char var_73 = (unsigned char)136;
unsigned long long int var_74 = 7532882880283763161ULL;
int var_75 = 58294596;
long long int arr_0 [19] ;
long long int arr_3 [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
_Bool arr_5 [19] ;
unsigned short arr_7 [19] [19] [19] [19] ;
unsigned short arr_10 [19] [19] [19] [19] [19] ;
short arr_11 [19] ;
unsigned int arr_15 [18] [18] ;
signed char arr_16 [18] ;
long long int arr_18 [18] [18] [18] ;
unsigned short arr_19 [18] ;
short arr_21 [18] [18] [18] ;
short arr_23 [18] [18] [18] [18] ;
short arr_26 [18] [18] [18] [18] [18] ;
_Bool arr_27 [18] [18] ;
signed char arr_28 [18] [18] [18] [18] [18] [18] ;
short arr_37 [18] [18] [18] ;
signed char arr_38 [18] [18] [18] [18] ;
int arr_43 [18] [18] [18] [18] ;
unsigned char arr_50 [18] [18] [18] [18] [18] ;
unsigned int arr_57 [18] [18] [18] [18] ;
unsigned long long int arr_62 [18] [18] ;
unsigned long long int arr_64 [18] [18] [18] ;
short arr_76 [18] [18] [18] [18] ;
unsigned long long int arr_77 [18] [18] [18] [18] [18] [18] [18] ;
unsigned short arr_80 [18] ;
long long int arr_84 [18] [18] [18] [18] ;
short arr_91 [12] ;
short arr_13 [19] [19] [19] ;
short arr_14 [19] ;
int arr_51 [18] [18] [18] [18] [18] ;
short arr_89 [18] [18] [18] ;
int arr_112 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1961184465079847798LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 7502098629418638992LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)31270 : (unsigned short)14624;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)56931 : (unsigned short)9926;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-19964 : (short)-19098;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 3886273756U : 701192299U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -4339717957221213262LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)43449;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)10918;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)1211;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-10248;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)4197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-76 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -914637691 : 1062030571;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)194 : (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = 1718764027U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_62 [i_0] [i_1] = 17737160876466238515ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = 999875060227172774ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_76 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-25130 : (short)2807;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 9263472322542392006ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_80 [i_0] = (unsigned short)60977;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = -4090001372189243403LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_91 [i_0] = (short)-4453;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-14785 : (short)-21026;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (short)-14712;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1868092903 : -428346122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_89 [i_0] [i_1] [i_2] = (short)-3307;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_112 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -476381140 : -230008497;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_89 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_112 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
