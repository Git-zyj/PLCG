#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)56104;
signed char var_4 = (signed char)72;
unsigned int var_7 = 2468527131U;
long long int var_9 = -8956194412753786883LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)220;
unsigned long long int var_14 = 9345214693054935556ULL;
signed char var_16 = (signed char)-87;
long long int var_17 = -4280763815996038225LL;
unsigned short var_18 = (unsigned short)64180;
int zero = 0;
unsigned char var_20 = (unsigned char)44;
unsigned long long int var_21 = 6890270623810651919ULL;
unsigned int var_22 = 1178006603U;
unsigned short var_23 = (unsigned short)46678;
unsigned char var_24 = (unsigned char)130;
unsigned short var_25 = (unsigned short)55081;
unsigned int var_26 = 76244460U;
long long int var_27 = 9035522815570644576LL;
unsigned int var_28 = 2165996902U;
long long int var_29 = 2382080728893337200LL;
_Bool var_30 = (_Bool)0;
long long int var_31 = -720172789565397013LL;
unsigned int var_32 = 1284319274U;
unsigned short var_33 = (unsigned short)46486;
unsigned char var_34 = (unsigned char)25;
unsigned int var_35 = 707185267U;
int var_36 = -400205198;
signed char var_37 = (signed char)25;
unsigned char var_38 = (unsigned char)167;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)20610;
unsigned int var_41 = 4192126735U;
unsigned long long int var_42 = 8452584255477242541ULL;
unsigned short var_43 = (unsigned short)52830;
unsigned short var_44 = (unsigned short)372;
long long int var_45 = -8921471787857340575LL;
int var_46 = 34513114;
int var_47 = 1632599666;
unsigned int var_48 = 1900605812U;
unsigned short var_49 = (unsigned short)51067;
_Bool var_50 = (_Bool)0;
signed char var_51 = (signed char)-100;
int var_52 = -1427563115;
signed char arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned short arr_2 [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
signed char arr_7 [21] [21] ;
signed char arr_9 [21] [21] ;
_Bool arr_10 [21] [21] [21] [21] ;
_Bool arr_11 [21] [21] [21] ;
short arr_12 [21] [21] [21] [21] ;
unsigned int arr_13 [21] [21] [21] [21] ;
unsigned short arr_17 [21] [21] [21] [21] ;
unsigned short arr_20 [21] [21] [21] [21] [21] ;
unsigned short arr_22 [21] ;
signed char arr_23 [21] [21] [21] ;
unsigned int arr_25 [21] [21] [21] ;
int arr_27 [21] [21] ;
short arr_30 [21] [21] [21] [21] ;
int arr_31 [21] ;
_Bool arr_33 [21] [21] [21] [21] ;
unsigned long long int arr_37 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 9080427450303140632LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)22973;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)25545;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 868055316U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-29718 : (short)7753;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 3248715800U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18841;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)18406;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (unsigned short)63661;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 2632785722U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = 466710731;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (short)-17309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 1215742625 : 1280293747;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = 17534148076679223393ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
