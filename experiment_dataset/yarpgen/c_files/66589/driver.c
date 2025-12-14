#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 466249973;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)75;
int var_3 = 1906288902;
int var_5 = 413084061;
int var_6 = 470525414;
unsigned int var_7 = 1032633798U;
unsigned long long int var_8 = 17763644676952333443ULL;
long long int var_9 = -462898716093392795LL;
int var_10 = -1326093791;
long long int var_11 = 2137001282868094904LL;
unsigned char var_12 = (unsigned char)158;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-45;
long long int var_15 = 6008101515935906568LL;
signed char var_16 = (signed char)103;
signed char var_17 = (signed char)-71;
unsigned char var_18 = (unsigned char)255;
signed char var_19 = (signed char)118;
long long int var_20 = 1480680318719205419LL;
long long int var_21 = 6623791094837233785LL;
int var_22 = -716710319;
short var_23 = (short)11688;
unsigned long long int var_24 = 2554424525369448975ULL;
long long int var_25 = -8648451428663888045LL;
long long int var_26 = 1684577881615325818LL;
signed char var_27 = (signed char)-55;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 2448858135U;
int var_30 = 972324695;
long long int var_31 = -5719557674215177570LL;
_Bool var_32 = (_Bool)0;
long long int var_33 = -252278626643269688LL;
_Bool var_34 = (_Bool)0;
long long int var_35 = -3936488101396054548LL;
short var_36 = (short)11378;
_Bool var_37 = (_Bool)1;
long long int var_38 = -5886676271314237241LL;
unsigned char var_39 = (unsigned char)49;
_Bool var_40 = (_Bool)0;
long long int var_41 = -6697567756931615081LL;
int var_42 = -1896979199;
int var_43 = 50606589;
long long int var_44 = -6976684785242281569LL;
unsigned char var_45 = (unsigned char)206;
int var_46 = 848477887;
_Bool var_47 = (_Bool)0;
long long int var_48 = -6735589676768376931LL;
unsigned long long int var_49 = 1489497691070191999ULL;
long long int var_50 = -7697877688094670191LL;
_Bool var_51 = (_Bool)1;
unsigned long long int var_52 = 16393083596309426816ULL;
unsigned char var_53 = (unsigned char)211;
_Bool var_54 = (_Bool)0;
signed char var_55 = (signed char)20;
long long int var_56 = 2184346306031095609LL;
unsigned int arr_3 [14] [14] [14] ;
unsigned int arr_4 [14] [14] ;
int arr_8 [14] [14] [14] [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] ;
int arr_15 [25] [25] ;
unsigned char arr_16 [25] [25] ;
long long int arr_17 [25] ;
long long int arr_18 [25] [25] ;
unsigned char arr_19 [25] [25] [25] ;
unsigned int arr_20 [25] ;
long long int arr_21 [25] ;
long long int arr_22 [25] [25] [25] [25] ;
int arr_24 [25] [25] [25] [25] ;
unsigned char arr_25 [25] [25] [25] [25] ;
long long int arr_26 [25] [25] [25] ;
short arr_27 [25] [25] [25] ;
unsigned int arr_28 [25] [25] [25] [25] [25] ;
int arr_30 [25] ;
long long int arr_32 [25] [25] [25] ;
unsigned char arr_33 [25] [25] [25] ;
long long int arr_34 [25] [25] [25] ;
unsigned int arr_36 [25] [25] [25] ;
unsigned int arr_37 [25] ;
long long int arr_38 [25] ;
long long int arr_39 [25] [25] [25] [25] ;
int arr_40 [25] [25] [25] [25] [25] ;
int arr_41 [25] [25] ;
int arr_42 [25] [25] [25] [25] [25] [25] [25] ;
int arr_44 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_52 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2851052334U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2235904432U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -834568801;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -6486223601827495261LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1088034380U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = -957704105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = -5381411487248378190LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = -7648255657270375933LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 3754054341U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 8760192023587300626LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 8031162627800847587LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 388395960;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 5274088361921861416LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-1080;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 2771594751U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = -1527110094;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = -4784084686110704552LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 6813195588956528613LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 427722737U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = 1384855905U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = -1623592759785728292LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 6741538767210142887LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1050938122 : 290873202;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_41 [i_0] [i_1] = -1061866661;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -1635581313 : -824651102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -752827226;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)208;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
