#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3693224836367987340LL;
unsigned int var_1 = 1825885982U;
unsigned int var_2 = 1480061198U;
int var_3 = 856225324;
long long int var_4 = 1183378589424065590LL;
int var_5 = -1166296789;
signed char var_6 = (signed char)-55;
long long int var_7 = 598120838348901127LL;
unsigned int var_8 = 3893328921U;
unsigned int var_9 = 3598575060U;
unsigned int var_10 = 217667049U;
signed char var_11 = (signed char)-16;
unsigned int var_12 = 2406971999U;
long long int var_13 = 2189765071480659607LL;
int zero = 0;
signed char var_14 = (signed char)-108;
signed char var_15 = (signed char)22;
signed char var_16 = (signed char)86;
unsigned int var_17 = 150328552U;
unsigned short var_18 = (unsigned short)5901;
unsigned int var_19 = 3519007291U;
long long int var_20 = -2357417947615558573LL;
short var_21 = (short)-18466;
int var_22 = -1359136461;
signed char var_23 = (signed char)-66;
signed char var_24 = (signed char)-127;
unsigned int var_25 = 530326409U;
long long int var_26 = -1639995432439694161LL;
unsigned int var_27 = 4110894048U;
int var_28 = -1419423124;
int var_29 = -318448499;
signed char var_30 = (signed char)-43;
short var_31 = (short)27054;
long long int var_32 = -2996079294596516500LL;
short var_33 = (short)25653;
unsigned int var_34 = 1784692839U;
signed char var_35 = (signed char)-34;
unsigned short var_36 = (unsigned short)21723;
short var_37 = (short)3240;
unsigned int var_38 = 2632414857U;
unsigned int var_39 = 1721677558U;
unsigned int var_40 = 3907172483U;
long long int var_41 = -1606510278104903180LL;
unsigned short var_42 = (unsigned short)23425;
short var_43 = (short)28978;
unsigned int var_44 = 2936273215U;
signed char var_45 = (signed char)-126;
long long int var_46 = -9182458597130870116LL;
long long int var_47 = 8276572224102559955LL;
long long int var_48 = 3141679713339061980LL;
signed char var_49 = (signed char)-104;
unsigned short var_50 = (unsigned short)55710;
unsigned int var_51 = 3222006748U;
unsigned int var_52 = 2338203403U;
signed char var_53 = (signed char)80;
long long int var_54 = 5811391671872556048LL;
unsigned short var_55 = (unsigned short)8452;
long long int var_56 = -3788840750159460778LL;
long long int var_57 = 5013808995870564263LL;
unsigned short var_58 = (unsigned short)45396;
unsigned int var_59 = 1420948882U;
unsigned int var_60 = 3061084430U;
signed char var_61 = (signed char)-56;
unsigned int var_62 = 2868614252U;
long long int var_63 = 692203481502881310LL;
signed char var_64 = (signed char)41;
signed char var_65 = (signed char)-91;
long long int var_66 = -2010718879573477729LL;
short var_67 = (short)17130;
signed char var_68 = (signed char)-60;
short var_69 = (short)29302;
signed char var_70 = (signed char)68;
unsigned short var_71 = (unsigned short)18312;
unsigned int var_72 = 3043496882U;
unsigned int var_73 = 3206564475U;
short var_74 = (short)15904;
unsigned int var_75 = 3679874150U;
signed char var_76 = (signed char)-96;
unsigned int var_77 = 3591641031U;
unsigned int var_78 = 3713770520U;
signed char var_79 = (signed char)108;
long long int var_80 = 6820765529094097611LL;
int var_81 = 1881434468;
long long int var_82 = 6261476148923885903LL;
unsigned short var_83 = (unsigned short)31184;
unsigned short var_84 = (unsigned short)62799;
signed char var_85 = (signed char)-113;
signed char var_86 = (signed char)-32;
long long int var_87 = -878484066763868097LL;
int var_88 = -1156472105;
signed char var_89 = (signed char)-53;
long long int var_90 = 1968331412805336187LL;
unsigned short var_91 = (unsigned short)9570;
signed char var_92 = (signed char)52;
long long int var_93 = -1050013796340421678LL;
short var_94 = (short)10404;
long long int var_95 = 2244492847715923800LL;
unsigned int var_96 = 890146818U;
signed char arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_3 [12] ;
long long int arr_7 [12] [12] ;
signed char arr_8 [12] [12] ;
unsigned short arr_11 [12] ;
long long int arr_12 [12] [12] [12] ;
long long int arr_14 [12] ;
signed char arr_15 [12] [12] [12] [12] [12] ;
long long int arr_16 [12] ;
signed char arr_18 [12] ;
unsigned short arr_19 [12] ;
short arr_24 [12] [12] [12] ;
long long int arr_26 [12] [12] [12] [12] [12] [12] ;
int arr_27 [12] [12] [12] [12] [12] ;
short arr_30 [12] ;
signed char arr_34 [12] [12] [12] ;
int arr_39 [12] [12] ;
long long int arr_46 [15] [15] ;
unsigned int arr_48 [19] ;
long long int arr_50 [19] [19] ;
long long int arr_51 [19] [19] ;
unsigned int arr_52 [19] [19] ;
short arr_53 [19] ;
long long int arr_54 [19] [19] [19] ;
long long int arr_55 [19] [19] ;
short arr_57 [19] [19] [19] [19] [19] ;
short arr_60 [19] [19] [19] [19] ;
signed char arr_61 [19] [19] ;
signed char arr_64 [19] [19] [19] [19] ;
unsigned int arr_70 [19] [19] [19] [19] [19] ;
int arr_73 [19] ;
unsigned int arr_79 [19] [19] [19] ;
signed char arr_83 [19] [19] [19] [19] ;
short arr_86 [19] ;
signed char arr_93 [19] ;
unsigned int arr_95 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)25593;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37 : (unsigned short)42892;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 8329431655217844164LL : -4287506154729077059LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)32861;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2642606762400995850LL : 7976181326566738628LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = -3943410312035881424LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = -3094334510998845256LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16457 : (unsigned short)28828;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)1029 : (short)-23182;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -36745890803676755LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 253227454;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = (short)5111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? -1314045635 : -319019288;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_46 [i_0] [i_1] = 6398768363779059158LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 2916785388U : 2533036182U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_50 [i_0] [i_1] = -2623105257887868456LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_51 [i_0] [i_1] = 1377230886540273136LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_52 [i_0] [i_1] = 488086569U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_53 [i_0] = (short)-11789;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 1555974759748633289LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_55 [i_0] [i_1] = 8660518120205011833LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)19482;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (short)29244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_61 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] = 1901172124U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_73 [i_0] = -1898333841;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_79 [i_0] [i_1] [i_2] = 1911807312U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_83 [i_0] [i_1] [i_2] [i_3] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_86 [i_0] = (short)15993;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_93 [i_0] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_95 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 315045100U : 22448930U;
}

void checksum() {
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
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
