#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 160639225;
short var_1 = (short)-28323;
unsigned long long int var_2 = 4053389943876457174ULL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)17401;
long long int var_7 = -2351359928656489919LL;
signed char var_8 = (signed char)(-127 - 1);
int var_9 = 431867685;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-15731;
int var_12 = 223018316;
int var_13 = -1010303097;
int var_14 = 320814104;
long long int var_15 = 6412338983535733616LL;
int zero = 0;
int var_16 = 315079805;
int var_17 = -165690049;
int var_18 = 2127121540;
int var_19 = 800245714;
int var_20 = 905257530;
int var_21 = -659114455;
int var_22 = -362716448;
short var_23 = (short)-12865;
long long int var_24 = -8342048605926510842LL;
_Bool var_25 = (_Bool)0;
int var_26 = 838860748;
unsigned long long int var_27 = 3317319581218561900ULL;
unsigned short var_28 = (unsigned short)35462;
unsigned long long int var_29 = 15192977801019351368ULL;
int var_30 = 1119849313;
long long int var_31 = -1594644773841843604LL;
int var_32 = -155438906;
unsigned long long int var_33 = 17881497453172886222ULL;
_Bool var_34 = (_Bool)1;
unsigned long long int var_35 = 7107540923402180969ULL;
int var_36 = 1217150792;
unsigned short var_37 = (unsigned short)29165;
int var_38 = 1191062573;
unsigned long long int var_39 = 6179605358606203775ULL;
int var_40 = -212136461;
long long int var_41 = 5784196875794245295LL;
int var_42 = 873497894;
int var_43 = -2123692237;
_Bool var_44 = (_Bool)1;
int var_45 = 314571871;
long long int var_46 = -3920898320601305987LL;
long long int var_47 = -1032343853248342895LL;
unsigned long long int var_48 = 12766745160941684344ULL;
_Bool var_49 = (_Bool)0;
_Bool var_50 = (_Bool)1;
long long int var_51 = 3220322546751982056LL;
unsigned short var_52 = (unsigned short)24310;
signed char var_53 = (signed char)33;
int var_54 = -1360552442;
int var_55 = 1810065418;
_Bool var_56 = (_Bool)1;
signed char var_57 = (signed char)-99;
signed char var_58 = (signed char)-124;
unsigned short var_59 = (unsigned short)49950;
int var_60 = 1392351908;
int var_61 = 2140984818;
long long int var_62 = -1911934776931836206LL;
unsigned short var_63 = (unsigned short)16752;
unsigned long long int var_64 = 4063303236264659098ULL;
unsigned long long int var_65 = 5273613020800347945ULL;
int var_66 = 1900772611;
_Bool var_67 = (_Bool)0;
int var_68 = -2114478708;
unsigned long long int var_69 = 5654745750490852338ULL;
long long int var_70 = 7725370902165149042LL;
signed char var_71 = (signed char)106;
signed char var_72 = (signed char)119;
int var_73 = -1284836924;
_Bool var_74 = (_Bool)0;
long long int var_75 = 1781700583400860490LL;
short var_76 = (short)25185;
int var_77 = -1731934595;
signed char var_78 = (signed char)92;
_Bool var_79 = (_Bool)1;
_Bool var_80 = (_Bool)0;
int var_81 = -1719847274;
signed char var_82 = (signed char)55;
unsigned long long int var_83 = 13423804101772425184ULL;
signed char var_84 = (signed char)43;
int var_85 = -726802294;
long long int var_86 = 6444435233734236140LL;
unsigned long long int var_87 = 1344695918446472137ULL;
short var_88 = (short)20760;
signed char var_89 = (signed char)5;
long long int var_90 = 1250986327889698106LL;
unsigned long long int var_91 = 11227025620746606335ULL;
int arr_0 [23] ;
_Bool arr_2 [23] [23] [23] ;
short arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] [23] ;
_Bool arr_5 [23] [23] [23] ;
int arr_6 [23] [23] [23] [23] ;
int arr_7 [23] [23] [23] ;
unsigned short arr_10 [25] ;
int arr_11 [25] ;
unsigned long long int arr_12 [25] ;
_Bool arr_13 [21] ;
_Bool arr_15 [21] [21] [21] ;
unsigned short arr_17 [21] [21] [21] ;
_Bool arr_19 [21] [21] [21] [21] ;
int arr_20 [21] [21] ;
_Bool arr_22 [21] ;
int arr_26 [21] [21] ;
int arr_32 [21] ;
int arr_42 [23] ;
int arr_43 [23] ;
long long int arr_44 [23] [23] ;
unsigned long long int arr_45 [23] [23] ;
int arr_46 [23] ;
int arr_47 [23] ;
int arr_48 [23] [23] ;
long long int arr_49 [23] [23] [23] ;
long long int arr_51 [23] [23] ;
long long int arr_52 [23] [23] ;
unsigned long long int arr_53 [23] [23] ;
signed char arr_54 [23] [23] [23] ;
long long int arr_55 [23] [23] [23] [23] [23] ;
signed char arr_56 [23] [23] [23] [23] ;
unsigned long long int arr_60 [23] ;
_Bool arr_62 [23] ;
int arr_63 [23] [23] [23] ;
unsigned long long int arr_66 [23] [23] ;
short arr_67 [23] [23] [23] [23] [23] [23] [23] ;
unsigned short arr_68 [23] [23] [23] [23] [23] ;
short arr_69 [23] [23] [23] [23] ;
signed char arr_70 [23] [23] [23] [23] ;
long long int arr_77 [23] [23] [23] [23] ;
unsigned long long int arr_79 [23] [23] [23] [23] [23] ;
signed char arr_83 [23] [23] ;
int arr_85 [23] [23] [23] [23] [23] ;
unsigned long long int arr_87 [23] [23] [23] ;
unsigned long long int arr_90 [23] [23] [23] [23] ;
int arr_92 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -624335255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-16742;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 5586921257755963691ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -204734245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 936823887;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)27886;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -1893998058;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 11772945987628689372ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)512;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = -1282986125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = 1738790243;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 647824752;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = -965129470;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = 1132757919;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_44 [i_0] [i_1] = -7886327954234404803LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_45 [i_0] [i_1] = 4549726936142574728ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = -1217115076;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = -1153232667;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_48 [i_0] [i_1] = 1920227118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 1293134246459572685LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_51 [i_0] [i_1] = -8426163598677956172LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_52 [i_0] [i_1] = 129136297480568295LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_53 [i_0] [i_1] = 18281044953336015747ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = -5550958555104822933LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_60 [i_0] = 18411106611532727086ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_62 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = 1382695408;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_66 [i_0] [i_1] = 16689534156567658258ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)19795;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)1041;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_69 [i_0] [i_1] [i_2] [i_3] = (short)19043;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = -7961473836792360001LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = 4504575253428645586ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_83 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = -274583107;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = 12910078150995172371ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = 14010805741213741058ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_92 [i_0] [i_1] [i_2] [i_3] [i_4] = 1343351811;
}

void checksum() {
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
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
