#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1556288514;
signed char var_2 = (signed char)-44;
int var_3 = -705661253;
unsigned char var_4 = (unsigned char)209;
signed char var_5 = (signed char)-80;
unsigned char var_6 = (unsigned char)227;
signed char var_7 = (signed char)99;
int var_8 = -2090080440;
signed char var_9 = (signed char)116;
int var_11 = -855596704;
short var_12 = (short)-7277;
unsigned short var_13 = (unsigned short)26166;
int zero = 0;
unsigned char var_14 = (unsigned char)238;
short var_15 = (short)-23327;
unsigned short var_16 = (unsigned short)27780;
signed char var_17 = (signed char)94;
unsigned char var_18 = (unsigned char)116;
int var_19 = -317784035;
short var_20 = (short)17916;
unsigned int var_21 = 3806922234U;
signed char var_22 = (signed char)108;
unsigned char var_23 = (unsigned char)206;
signed char var_24 = (signed char)5;
int var_25 = -922803187;
short var_26 = (short)24253;
unsigned char var_27 = (unsigned char)132;
unsigned short var_28 = (unsigned short)52333;
unsigned char var_29 = (unsigned char)253;
long long int var_30 = 36391068208152783LL;
unsigned char var_31 = (unsigned char)187;
unsigned short var_32 = (unsigned short)16749;
long long int var_33 = 8335863589938929919LL;
short var_34 = (short)-22155;
unsigned char var_35 = (unsigned char)38;
short var_36 = (short)-6533;
unsigned char var_37 = (unsigned char)254;
short var_38 = (short)22219;
unsigned int var_39 = 2118053171U;
unsigned short var_40 = (unsigned short)29843;
unsigned char var_41 = (unsigned char)170;
unsigned char var_42 = (unsigned char)65;
unsigned char var_43 = (unsigned char)137;
long long int var_44 = 6685904133434715346LL;
unsigned long long int var_45 = 1898787742167370924ULL;
unsigned char var_46 = (unsigned char)40;
int var_47 = 495406735;
int var_48 = 434656982;
unsigned int var_49 = 329035179U;
unsigned char var_50 = (unsigned char)103;
unsigned char var_51 = (unsigned char)129;
signed char var_52 = (signed char)112;
unsigned int var_53 = 2083793322U;
unsigned char var_54 = (unsigned char)87;
short var_55 = (short)7716;
unsigned char var_56 = (unsigned char)12;
unsigned char var_57 = (unsigned char)217;
int var_58 = -1961942427;
unsigned char var_59 = (unsigned char)131;
unsigned int var_60 = 4250415564U;
short var_61 = (short)-30775;
unsigned int var_62 = 2643918946U;
signed char var_63 = (signed char)-4;
short var_64 = (short)-21747;
signed char var_65 = (signed char)71;
unsigned short var_66 = (unsigned short)25803;
unsigned char var_67 = (unsigned char)56;
signed char var_68 = (signed char)100;
unsigned int var_69 = 3897929084U;
unsigned char var_70 = (unsigned char)14;
unsigned short var_71 = (unsigned short)11742;
unsigned char var_72 = (unsigned char)245;
unsigned int arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned short arr_2 [17] [17] ;
long long int arr_3 [17] [17] [17] ;
int arr_4 [17] [17] [17] ;
int arr_5 [17] [17] [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
unsigned int arr_7 [17] [17] [17] [17] ;
int arr_8 [17] [17] [17] [17] ;
signed char arr_10 [17] [17] [17] [17] [17] [17] [17] ;
signed char arr_11 [17] [17] [17] [17] [17] [17] ;
long long int arr_13 [17] ;
unsigned char arr_14 [17] ;
short arr_15 [17] [17] [17] ;
unsigned int arr_17 [17] ;
signed char arr_20 [17] ;
unsigned char arr_21 [17] [17] [17] ;
unsigned long long int arr_22 [17] [17] [17] ;
unsigned short arr_23 [17] ;
short arr_28 [17] [17] [17] ;
unsigned short arr_30 [17] ;
unsigned short arr_31 [17] [17] [17] ;
unsigned char arr_32 [17] [17] ;
long long int arr_33 [17] [17] ;
unsigned char arr_34 [17] [17] [17] [17] ;
_Bool arr_35 [17] ;
unsigned long long int arr_36 [17] ;
unsigned char arr_37 [17] [17] ;
unsigned char arr_39 [17] [17] [17] [17] [17] ;
unsigned char arr_40 [17] [17] ;
unsigned long long int arr_42 [17] [17] [17] ;
unsigned char arr_45 [17] [17] [17] [17] [17] ;
unsigned char arr_48 [17] [17] [17] ;
signed char arr_50 [17] [17] [17] [17] [17] ;
unsigned short arr_51 [17] [17] [17] [17] [17] ;
signed char arr_54 [17] [17] [17] [17] ;
unsigned int arr_56 [17] [17] [17] [17] ;
unsigned short arr_58 [17] [17] [17] [17] ;
long long int arr_80 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3981481868U : 1102166447U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40939;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1600014680573985696LL : 240511978580166292LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 362242917 : -1794206923;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 283645255;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)53313;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3902814767U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1998401990 : -1947295885;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 8224208854864115103LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)9700 : (short)-3935;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 684895448U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1332586210466701238ULL : 7879048608826804899ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (unsigned short)11286;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-23567 : (short)10046;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = (unsigned short)4409;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)37799;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = 5881858681602643270LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = 3164760015469632235ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)113 : (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = 10076033286370851571ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)15776;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = 1464429271U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7771;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_80 [i_0] [i_1] = -8834459816741092028LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
