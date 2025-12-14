#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)56;
unsigned long long int var_2 = 4099119522570743716ULL;
unsigned char var_3 = (unsigned char)143;
short var_4 = (short)-27822;
unsigned short var_5 = (unsigned short)31785;
short var_6 = (short)3839;
unsigned short var_7 = (unsigned short)11267;
unsigned long long int var_8 = 16804599097404734904ULL;
short var_10 = (short)-6651;
short var_12 = (short)-14103;
unsigned int var_13 = 2827474409U;
unsigned long long int var_14 = 13328560012285338574ULL;
int zero = 0;
int var_15 = -1498104973;
int var_16 = -854141748;
int var_17 = 1116983931;
int var_18 = -2012419514;
unsigned int var_19 = 2621471614U;
unsigned int var_20 = 1082735062U;
unsigned long long int var_21 = 1141880899348104379ULL;
short var_22 = (short)-31577;
signed char var_23 = (signed char)-117;
int var_24 = -981697166;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 4892036612018740293ULL;
short var_27 = (short)-30665;
signed char var_28 = (signed char)-97;
int var_29 = 1546057211;
unsigned int var_30 = 1475226524U;
unsigned long long int var_31 = 4321509120497107881ULL;
int var_32 = -1191850462;
unsigned int var_33 = 2275066571U;
unsigned char var_34 = (unsigned char)165;
unsigned int var_35 = 887367526U;
unsigned short arr_0 [13] ;
signed char arr_4 [13] ;
unsigned char arr_7 [13] [13] ;
int arr_8 [13] [13] [13] [13] [13] ;
unsigned long long int arr_9 [13] [13] [13] ;
short arr_10 [13] [13] [13] [13] [13] ;
int arr_11 [13] [13] [13] [13] [13] [13] [13] ;
short arr_13 [13] [13] [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] [13] [13] ;
unsigned char arr_22 [13] [13] [13] [13] [13] [13] [13] ;
_Bool arr_27 [13] ;
long long int arr_28 [13] [13] [13] [13] ;
signed char arr_29 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)2698;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = -1668229018;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 11404544504765841581ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-2779;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1468902347;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)11037;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)224 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -8481245032702948815LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (signed char)34;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
