#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38084;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 14560372183815972808ULL;
unsigned short var_3 = (unsigned short)42136;
signed char var_4 = (signed char)105;
long long int var_5 = 3866859124654817990LL;
unsigned short var_6 = (unsigned short)34089;
short var_7 = (short)-32738;
unsigned long long int var_8 = 1152051666550738490ULL;
signed char var_9 = (signed char)98;
signed char var_10 = (signed char)-21;
int var_11 = 355566559;
unsigned char var_12 = (unsigned char)36;
unsigned short var_13 = (unsigned short)53367;
int zero = 0;
unsigned short var_14 = (unsigned short)24599;
unsigned long long int var_15 = 12177353195405411088ULL;
signed char var_16 = (signed char)-108;
unsigned short var_17 = (unsigned short)48039;
unsigned int var_18 = 2181865196U;
unsigned short var_19 = (unsigned short)30483;
short var_20 = (short)-16310;
unsigned long long int var_21 = 12168593412650186360ULL;
unsigned long long int var_22 = 12210094102152763513ULL;
long long int var_23 = 4469750030114898054LL;
short var_24 = (short)2923;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)49;
unsigned int var_27 = 4246064186U;
unsigned long long int var_28 = 10621328304890920258ULL;
unsigned short var_29 = (unsigned short)26073;
unsigned short var_30 = (unsigned short)59334;
int var_31 = 48773095;
unsigned long long int var_32 = 9460717283693251661ULL;
short var_33 = (short)27339;
unsigned short var_34 = (unsigned short)50921;
unsigned short var_35 = (unsigned short)38634;
unsigned long long int var_36 = 7244245562759828035ULL;
_Bool var_37 = (_Bool)0;
short var_38 = (short)32069;
int var_39 = 303192501;
short var_40 = (short)-31019;
signed char var_41 = (signed char)-76;
int var_42 = -1923317363;
_Bool var_43 = (_Bool)1;
signed char var_44 = (signed char)5;
unsigned short var_45 = (unsigned short)14197;
unsigned long long int var_46 = 9669003501619011608ULL;
int var_47 = -1544023309;
short var_48 = (short)11453;
int var_49 = -1726743258;
long long int var_50 = 677124423235239462LL;
unsigned char var_51 = (unsigned char)167;
unsigned char var_52 = (unsigned char)54;
long long int var_53 = -4812011135099376031LL;
unsigned long long int var_54 = 17054573220827383772ULL;
unsigned long long int var_55 = 13843072207084627492ULL;
short var_56 = (short)-19027;
long long int var_57 = -4695697783683307140LL;
long long int var_58 = 8811739960001033293LL;
unsigned long long int var_59 = 17690802115598105643ULL;
unsigned short var_60 = (unsigned short)61889;
signed char var_61 = (signed char)-100;
int var_62 = -1359041197;
int var_63 = -2016171327;
unsigned char var_64 = (unsigned char)156;
unsigned long long int var_65 = 7864657639684988919ULL;
unsigned short var_66 = (unsigned short)19967;
unsigned long long int var_67 = 5784190395780981467ULL;
_Bool var_68 = (_Bool)0;
unsigned short var_69 = (unsigned short)28175;
unsigned short var_70 = (unsigned short)64906;
unsigned long long int var_71 = 12394649067509961436ULL;
short var_72 = (short)-20606;
unsigned long long int var_73 = 8011926895135931524ULL;
signed char var_74 = (signed char)116;
int var_75 = -1543266296;
long long int arr_1 [10] ;
short arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
long long int arr_4 [10] [10] [10] ;
int arr_5 [10] [10] ;
unsigned short arr_6 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_9 [10] [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] ;
unsigned short arr_11 [10] [10] ;
short arr_14 [10] ;
int arr_22 [23] ;
unsigned char arr_26 [23] [23] [23] ;
short arr_27 [23] [23] [23] ;
long long int arr_28 [23] ;
unsigned int arr_29 [23] ;
unsigned long long int arr_30 [23] ;
long long int arr_35 [25] [25] ;
unsigned int arr_36 [25] [25] ;
unsigned short arr_38 [25] [25] ;
unsigned short arr_39 [25] [25] [25] ;
int arr_40 [25] [25] [25] ;
int arr_41 [25] [25] [25] [25] ;
signed char arr_43 [25] [25] ;
unsigned short arr_44 [25] ;
unsigned long long int arr_45 [25] [25] [25] ;
signed char arr_50 [25] [25] [25] ;
unsigned short arr_53 [25] [25] [25] [25] [25] ;
int arr_54 [25] [25] [25] [25] ;
long long int arr_57 [25] [25] [25] [25] ;
unsigned short arr_59 [25] ;
unsigned short arr_64 [25] [25] [25] ;
long long int arr_70 [25] [25] ;
signed char arr_73 [25] [25] [25] [25] ;
long long int arr_74 [25] [25] ;
unsigned char arr_80 [25] [25] [25] [25] ;
unsigned char arr_12 [10] ;
unsigned char arr_51 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_60 [25] ;
unsigned long long int arr_71 [25] [25] [25] [25] [25] ;
signed char arr_87 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -9138831602847721401LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-23359;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 10921976355816812474ULL : 17930002167857071253ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -7951815140878010254LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -870074213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)43911;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)52948;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 9454750648116297946ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)42899 : (unsigned short)13226;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)13257 : (short)4328;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = -27539969;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)7466;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = -3989152743833731982LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = 2745089339U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 12071584201539119041ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = 723517697472495028LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 3866652459U : 2947866798U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)17191 : (unsigned short)21404;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)52525 : (unsigned short)24731;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 1644683178;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1949534724 : 1193720696;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = (unsigned short)19196;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3817872716907853270ULL : 8266110398661887707ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-70 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)16183;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = -118450634;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = -7373505074300233790LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43789 : (unsigned short)36845;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (unsigned short)24539;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_70 [i_0] [i_1] = -3644995004385169701LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)99 : (signed char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_74 [i_0] [i_1] = -5234302975322700746LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_80 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)173 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)150 : (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12546 : (unsigned short)7093;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 9528351298868405329ULL : 11745909506978238506ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-42 : (signed char)45;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_87 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
