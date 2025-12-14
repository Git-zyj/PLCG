#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
int var_1 = 316596402;
unsigned char var_2 = (unsigned char)91;
long long int var_5 = 4897516623192796235LL;
long long int var_6 = 9166422541604905333LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)23505;
unsigned char var_11 = (unsigned char)221;
short var_12 = (short)9165;
signed char var_13 = (signed char)-126;
short var_14 = (short)5018;
short var_16 = (short)-21186;
int zero = 0;
int var_17 = -1572919588;
unsigned int var_18 = 1719621651U;
long long int var_19 = -4941479787833783457LL;
int var_20 = 1971573735;
unsigned int var_21 = 3787968028U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)31713;
_Bool var_24 = (_Bool)0;
long long int var_25 = 4079291660335739139LL;
unsigned char var_26 = (unsigned char)54;
long long int var_27 = 1778498874534896059LL;
long long int var_28 = 4490584233315514292LL;
short var_29 = (short)23432;
signed char var_30 = (signed char)-107;
long long int var_31 = 658541232621108073LL;
unsigned char var_32 = (unsigned char)206;
short var_33 = (short)7911;
unsigned short var_34 = (unsigned short)20976;
_Bool var_35 = (_Bool)0;
long long int var_36 = -346830849286821034LL;
long long int var_37 = -1387989809869220136LL;
unsigned short var_38 = (unsigned short)42009;
long long int var_39 = -248053106868691124LL;
unsigned int var_40 = 384233782U;
long long int var_41 = -7736669178283852398LL;
unsigned int var_42 = 4054218519U;
long long int arr_0 [14] ;
short arr_1 [14] [14] ;
unsigned char arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
long long int arr_4 [13] [13] ;
short arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] [13] ;
long long int arr_7 [13] ;
short arr_10 [21] ;
long long int arr_11 [21] [21] ;
long long int arr_12 [11] [11] ;
long long int arr_13 [11] ;
int arr_14 [11] ;
unsigned int arr_15 [11] [11] [11] ;
unsigned short arr_19 [11] ;
unsigned char arr_20 [11] [11] [11] ;
_Bool arr_22 [11] [11] [11] [11] ;
unsigned char arr_31 [11] [11] [11] [11] [11] ;
_Bool arr_33 [17] [17] ;
long long int arr_8 [13] [13] ;
long long int arr_9 [13] [13] ;
int arr_16 [11] [11] [11] ;
signed char arr_32 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_36 [17] ;
int arr_37 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -5097645011079632935LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-14553;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 8177685211503063452LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)17789;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 4136127541991211159LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)28846;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 3894896603600248904LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 5119565570520635526LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 493947641371678469LL : 8596320260130852953LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = -1347039846;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2464840729U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (unsigned short)62452;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)119 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -722967583735607505LL : 8550418546238972586LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 8355458508541528967LL : -8766741992088994967LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1255630111 : 236981523;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)52 : (signed char)-48;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = (unsigned short)12801;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_37 [i_0] = 161375487;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
