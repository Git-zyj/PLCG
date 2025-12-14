#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3781158073406300151ULL;
short var_4 = (short)-27556;
short var_5 = (short)11522;
unsigned int var_6 = 4189678293U;
unsigned int var_7 = 673923338U;
signed char var_8 = (signed char)85;
unsigned short var_9 = (unsigned short)42288;
unsigned char var_10 = (unsigned char)200;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-28573;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-7;
signed char var_15 = (signed char)82;
unsigned short var_16 = (unsigned short)45819;
long long int var_17 = 4109559834193276928LL;
unsigned short var_18 = (unsigned short)33048;
int zero = 0;
short var_19 = (short)-22614;
signed char var_20 = (signed char)-11;
int var_21 = 1060731002;
unsigned long long int var_22 = 12546206171338183781ULL;
short var_23 = (short)17275;
short var_24 = (short)-30706;
short var_25 = (short)9014;
signed char var_26 = (signed char)80;
unsigned int var_27 = 2129122119U;
unsigned long long int var_28 = 9594997530399920126ULL;
int var_29 = 1509390401;
unsigned char var_30 = (unsigned char)59;
short var_31 = (short)-10279;
short var_32 = (short)1345;
unsigned long long int var_33 = 10436588732651990978ULL;
long long int var_34 = 8343829101363024967LL;
unsigned char var_35 = (unsigned char)57;
unsigned long long int var_36 = 11515788018527724653ULL;
signed char var_37 = (signed char)65;
signed char var_38 = (signed char)-120;
signed char arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
short arr_3 [24] [24] ;
int arr_6 [18] ;
signed char arr_9 [18] [18] ;
unsigned int arr_10 [18] ;
unsigned int arr_15 [18] [18] ;
long long int arr_19 [16] ;
short arr_4 [24] ;
signed char arr_8 [18] ;
short arr_11 [18] [18] [18] ;
int arr_12 [18] [18] [18] ;
short arr_18 [18] [18] ;
short arr_24 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)23090;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 6056726203784384223ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-5489;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 495937399;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 1214744669U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 3130117383U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 2123524019768851147LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)17886;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-17079;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 979277100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-24611;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (short)-13160;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
