#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)-20;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2219092262U;
unsigned int var_7 = 3345220684U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_14 = 1951066744;
unsigned short var_15 = (unsigned short)62338;
unsigned short var_16 = (unsigned short)19599;
int zero = 0;
unsigned short var_19 = (unsigned short)23998;
unsigned short var_20 = (unsigned short)25777;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)25191;
unsigned short var_23 = (unsigned short)49250;
short var_24 = (short)32009;
unsigned short var_25 = (unsigned short)2799;
short var_26 = (short)30781;
unsigned short var_27 = (unsigned short)55220;
signed char var_28 = (signed char)-27;
long long int var_29 = 4713042080993063067LL;
signed char var_30 = (signed char)76;
unsigned short var_31 = (unsigned short)30555;
_Bool var_32 = (_Bool)0;
unsigned int var_33 = 2760194373U;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 1041458691U;
int var_36 = -32786495;
unsigned int var_37 = 1762279317U;
_Bool var_38 = (_Bool)1;
int var_39 = 621942145;
unsigned int var_40 = 4187710276U;
short var_41 = (short)-31336;
unsigned int var_42 = 1080594168U;
unsigned int var_43 = 580167185U;
long long int arr_0 [10] ;
int arr_1 [10] ;
unsigned int arr_5 [10] [10] [10] [10] ;
unsigned int arr_8 [10] ;
unsigned int arr_13 [10] [10] [10] ;
int arr_15 [10] [10] [10] [10] [10] [10] [10] ;
unsigned int arr_16 [10] [10] [10] [10] [10] ;
unsigned int arr_25 [10] [10] [10] [10] [10] [10] ;
int arr_28 [15] ;
_Bool arr_6 [10] [10] [10] ;
unsigned short arr_21 [10] [10] [10] ;
long long int arr_31 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1473720148772228620LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -690232965;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2629243324U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1651031457U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 391692709U : 2805878855U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 317024049;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 4220701792U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 3462551791U : 3596679122U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = -1780016828;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)37188 : (unsigned short)20452;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_31 [i_0] = 6291720029763501026LL;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
