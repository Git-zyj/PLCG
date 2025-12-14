#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41647;
int var_2 = -139630390;
unsigned short var_3 = (unsigned short)39066;
unsigned short var_4 = (unsigned short)1370;
int var_6 = 34120750;
unsigned short var_7 = (unsigned short)22566;
short var_8 = (short)-6056;
int var_9 = 999977610;
unsigned short var_12 = (unsigned short)71;
unsigned short var_13 = (unsigned short)34190;
unsigned char var_14 = (unsigned char)130;
long long int var_15 = -6272830697103506506LL;
int zero = 0;
unsigned char var_16 = (unsigned char)193;
signed char var_17 = (signed char)-25;
int var_18 = -1009974304;
unsigned short var_19 = (unsigned short)36090;
long long int var_20 = 5250856900320589945LL;
unsigned int var_21 = 3522975353U;
long long int var_22 = 8861385955812148327LL;
long long int var_23 = -5109217100714155816LL;
int var_24 = -1782999739;
unsigned short var_25 = (unsigned short)12140;
unsigned int var_26 = 2877207213U;
unsigned short var_27 = (unsigned short)42699;
unsigned short var_28 = (unsigned short)46180;
long long int var_29 = 7342302087914168717LL;
long long int var_30 = -8480707807146857321LL;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 2330884877U;
unsigned short var_33 = (unsigned short)1636;
unsigned int var_34 = 568139861U;
long long int var_35 = 4302006291371405578LL;
int var_36 = -310265638;
unsigned short arr_1 [14] ;
signed char arr_3 [14] ;
unsigned short arr_6 [21] ;
unsigned short arr_7 [21] ;
unsigned int arr_8 [21] ;
unsigned long long int arr_9 [21] ;
signed char arr_11 [22] ;
long long int arr_12 [22] ;
int arr_13 [22] [22] ;
unsigned short arr_15 [22] [22] ;
unsigned short arr_16 [22] [22] ;
int arr_19 [22] [22] ;
long long int arr_23 [22] [22] ;
long long int arr_27 [19] ;
long long int arr_32 [19] ;
long long int arr_44 [24] ;
_Bool arr_46 [24] ;
unsigned short arr_5 [14] ;
int arr_10 [21] ;
short arr_18 [22] ;
unsigned short arr_21 [22] [22] ;
unsigned short arr_26 [22] ;
unsigned short arr_34 [19] [19] [19] ;
unsigned char arr_35 [19] ;
long long int arr_43 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4041 : (unsigned short)28784;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)42105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)59161;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 4172900309U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 14941521008759440377ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)-44;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -4650398226274073196LL : 2301660298366664915LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? -855299764 : 1191841700;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36330 : (unsigned short)55463;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)50814;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 396181718 : -1269896751;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? -2564640400487695772LL : 2486664476339227486LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 7150099307299495875LL : -5010723009899322113LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = 4348307019141263916LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = 4115352029681743377LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_46 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)43091;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 1795311730;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-28159 : (short)686;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)899 : (unsigned short)31111;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29675 : (unsigned short)38373;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)8507 : (unsigned short)1629;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (unsigned char)44 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -8661664758522177124LL : 3652967310379557820LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
