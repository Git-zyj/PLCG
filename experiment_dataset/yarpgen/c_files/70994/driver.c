#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1923992229;
long long int var_9 = -2255177404618248651LL;
signed char var_11 = (signed char)83;
unsigned char var_12 = (unsigned char)94;
signed char var_13 = (signed char)85;
long long int var_17 = 2148836716033500001LL;
int zero = 0;
long long int var_18 = -7551299605977541882LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)7;
short var_21 = (short)-2901;
int var_22 = 1585387722;
unsigned long long int var_23 = 15193741605526861519ULL;
signed char var_24 = (signed char)27;
long long int var_25 = 563100543093074357LL;
short var_26 = (short)-2714;
short var_27 = (short)-32241;
unsigned char var_28 = (unsigned char)61;
unsigned char var_29 = (unsigned char)175;
short var_30 = (short)-26918;
unsigned int var_31 = 614412115U;
short var_32 = (short)-3730;
unsigned long long int var_33 = 7335232125748133309ULL;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 2887663927U;
short var_36 = (short)31110;
long long int arr_0 [22] [22] ;
_Bool arr_3 [22] ;
signed char arr_4 [22] [22] [22] ;
unsigned short arr_5 [22] ;
signed char arr_6 [22] [22] [22] ;
signed char arr_7 [22] [22] [22] ;
long long int arr_8 [22] [22] [22] ;
unsigned char arr_9 [22] [22] [22] ;
unsigned short arr_10 [22] [22] ;
unsigned char arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 304102375344014680LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)4363;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7683745477734755787LL : -7317534434075175222LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)10450;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned char)126;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
