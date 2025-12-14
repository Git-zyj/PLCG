#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2013185502U;
unsigned int var_7 = 1959396620U;
unsigned short var_8 = (unsigned short)31115;
long long int var_9 = 6922924057254838194LL;
unsigned int var_10 = 2664336849U;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 2379894998U;
int var_17 = 888372000;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-40;
unsigned long long int var_20 = 17947560504537641301ULL;
unsigned short var_21 = (unsigned short)12592;
int var_22 = 493271191;
signed char var_23 = (signed char)-59;
unsigned long long int var_24 = 4916532010005404253ULL;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12418214024941691266ULL;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 720761146U;
_Bool var_29 = (_Bool)0;
int var_30 = 1589901451;
int var_31 = -894398639;
long long int var_32 = 3702745653176665381LL;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)173;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)17634;
short var_37 = (short)-22874;
signed char var_38 = (signed char)17;
short var_39 = (short)-29953;
unsigned char var_40 = (unsigned char)113;
signed char arr_0 [16] ;
unsigned long long int arr_1 [16] ;
_Bool arr_2 [23] ;
unsigned short arr_3 [23] ;
int arr_4 [23] [23] ;
unsigned char arr_5 [23] ;
unsigned short arr_7 [16] ;
unsigned int arr_10 [16] [16] [16] ;
int arr_12 [16] [16] [16] ;
_Bool arr_14 [21] [21] ;
unsigned char arr_15 [21] ;
unsigned long long int arr_16 [21] [21] ;
unsigned int arr_17 [21] [21] [21] ;
unsigned long long int arr_19 [13] ;
_Bool arr_25 [20] ;
_Bool arr_29 [19] ;
long long int arr_33 [19] ;
unsigned long long int arr_35 [19] [19] [19] ;
unsigned char arr_20 [13] ;
_Bool arr_21 [13] ;
unsigned long long int arr_24 [20] ;
_Bool arr_27 [20] [20] ;
int arr_28 [20] [20] [20] ;
short arr_39 [19] ;
int arr_40 [19] [19] [19] ;
unsigned long long int arr_41 [19] ;
long long int arr_42 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 12558507747728121299ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)18785;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1648949834;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)29033;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 834928948U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 48016841;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 9677260537716490088ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1120149184U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = 6044032644332251191ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = -4965562926897013964LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 43757911306065177ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 18009984970133341077ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 690116812 : 188657618;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (short)-26206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 946888930;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_41 [i_0] = 6455663866144550824ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_42 [i_0] = -4939495168966812890LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
