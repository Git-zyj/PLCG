#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
int var_4 = -279770154;
unsigned int var_5 = 478425854U;
int var_8 = 301440019;
int var_9 = 1030108123;
int var_10 = -1119430057;
short var_11 = (short)3199;
_Bool var_12 = (_Bool)1;
short var_15 = (short)9028;
int var_16 = -266345607;
unsigned long long int var_18 = 15111223602264256935ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)197;
unsigned int var_20 = 2273323816U;
unsigned char var_21 = (unsigned char)139;
short var_22 = (short)-1407;
long long int var_23 = -9026003468326931358LL;
unsigned int var_24 = 1935113494U;
int var_25 = -1161088203;
int var_26 = 157669121;
short var_27 = (short)12831;
short var_28 = (short)-5882;
unsigned char var_29 = (unsigned char)117;
unsigned char var_30 = (unsigned char)155;
unsigned char var_31 = (unsigned char)148;
short var_32 = (short)-29979;
short var_33 = (short)32452;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)36815;
unsigned char var_36 = (unsigned char)247;
_Bool var_37 = (_Bool)0;
unsigned char var_38 = (unsigned char)92;
_Bool var_39 = (_Bool)1;
unsigned int arr_0 [22] ;
unsigned char arr_4 [22] ;
_Bool arr_8 [22] ;
short arr_12 [22] [22] [22] ;
unsigned char arr_14 [22] [22] [22] ;
int arr_16 [22] [22] [22] [22] [22] [22] ;
int arr_17 [22] [22] [22] [22] ;
long long int arr_22 [13] ;
unsigned short arr_39 [19] ;
_Bool arr_2 [22] ;
long long int arr_5 [22] ;
int arr_23 [13] ;
unsigned long long int arr_35 [19] [19] [19] [19] [19] ;
int arr_36 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 149150344U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)25765;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 163340596 : 475825914;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1595920278;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = -2897815962540874870LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (unsigned short)28601;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -6299126783138013576LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = 2114126207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 2619619034312675260ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = 619566855;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
