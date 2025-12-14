#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7631;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2437490108U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)156;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2775692161U;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)48;
unsigned long long int var_10 = 14343003531546735564ULL;
unsigned int var_11 = 3868161558U;
int var_12 = 1261481641;
long long int var_13 = 2300087934540920435LL;
int var_15 = -1830065081;
long long int var_16 = 2994256101024091582LL;
int zero = 0;
unsigned long long int var_17 = 13743393646226899307ULL;
unsigned short var_18 = (unsigned short)22583;
_Bool var_19 = (_Bool)1;
int var_20 = 1620569887;
unsigned short var_21 = (unsigned short)63125;
unsigned char var_22 = (unsigned char)230;
unsigned int var_23 = 2584550180U;
short var_24 = (short)22224;
unsigned int var_25 = 3788988243U;
short var_26 = (short)22757;
unsigned long long int var_27 = 8577407353086326631ULL;
unsigned short var_28 = (unsigned short)11074;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 1906414582U;
unsigned short var_31 = (unsigned short)51354;
unsigned int var_32 = 3890878584U;
unsigned int var_33 = 3818361191U;
unsigned short var_34 = (unsigned short)34791;
unsigned int var_35 = 3453021027U;
unsigned int var_36 = 1170897624U;
unsigned long long int var_37 = 18135733582428261787ULL;
unsigned char var_38 = (unsigned char)185;
int var_39 = -1798710840;
unsigned short var_40 = (unsigned short)5957;
long long int var_41 = -5304893329002790972LL;
unsigned short var_42 = (unsigned short)43876;
long long int var_43 = -1619063693729243719LL;
long long int var_44 = 7065706058430057930LL;
long long int var_45 = 3558336629495698193LL;
unsigned char var_46 = (unsigned char)113;
int var_47 = -487444406;
unsigned char var_48 = (unsigned char)155;
signed char var_49 = (signed char)-77;
unsigned short var_50 = (unsigned short)54708;
long long int var_51 = 987114561694832188LL;
long long int var_52 = 518440161780426192LL;
unsigned int var_53 = 1347756047U;
unsigned long long int var_54 = 3145717777460142502ULL;
unsigned char var_55 = (unsigned char)205;
unsigned int var_56 = 2964880053U;
unsigned int var_57 = 2243114598U;
unsigned long long int var_58 = 6873701705444408156ULL;
_Bool var_59 = (_Bool)1;
unsigned short var_60 = (unsigned short)1208;
unsigned long long int var_61 = 11030077349482119633ULL;
unsigned short var_62 = (unsigned short)58105;
long long int var_63 = 3739671720073293043LL;
_Bool var_64 = (_Bool)1;
unsigned int var_65 = 2810188924U;
unsigned long long int var_66 = 9576474037152231485ULL;
int var_67 = -264560445;
unsigned char var_68 = (unsigned char)83;
unsigned short var_69 = (unsigned short)36445;
unsigned int arr_0 [23] ;
unsigned char arr_1 [23] ;
signed char arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
unsigned char arr_4 [12] [12] ;
unsigned char arr_5 [12] ;
_Bool arr_6 [12] [12] [12] ;
int arr_7 [12] [12] ;
long long int arr_8 [12] ;
unsigned short arr_9 [12] [12] [12] ;
unsigned short arr_10 [12] ;
unsigned int arr_11 [12] ;
unsigned int arr_12 [12] ;
unsigned short arr_13 [12] [12] [12] [12] [12] ;
unsigned long long int arr_14 [12] [12] [12] [12] ;
_Bool arr_15 [12] ;
long long int arr_16 [12] [12] [12] [12] ;
unsigned char arr_19 [12] [12] [12] [12] [12] ;
_Bool arr_20 [12] [12] ;
unsigned short arr_21 [12] ;
_Bool arr_22 [12] [12] [12] [12] ;
unsigned long long int arr_23 [12] [12] [12] [12] ;
unsigned char arr_25 [12] [12] [12] ;
_Bool arr_26 [12] [12] [12] [12] ;
long long int arr_28 [12] ;
unsigned int arr_30 [12] [12] [12] [12] [12] ;
unsigned char arr_32 [12] [12] [12] ;
unsigned char arr_38 [12] [12] [12] [12] ;
long long int arr_39 [12] [12] [12] [12] ;
unsigned short arr_44 [12] [12] [12] [12] [12] ;
unsigned long long int arr_45 [12] [12] [12] ;
int arr_46 [12] [12] [12] [12] [12] ;
unsigned int arr_47 [12] [12] [12] [12] [12] ;
unsigned char arr_53 [12] ;
unsigned int arr_58 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3506260941U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)6906;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = -1650686018;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 341201362847435279LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)54133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)23247;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 345317248U : 790896742U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 368585914U : 97839031U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)512;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 16341327593281341764ULL : 1650332494681919585ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2644122473189050845LL : -4728208840061010572LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (unsigned short)32695;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 10565797235585062734ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = -5801170503843755747LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 2668253903U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 7028319834880649247LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)12702;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 12585896889804392195ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = 1085488829;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 602959509U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_53 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_58 [i_0] = 778280941U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
