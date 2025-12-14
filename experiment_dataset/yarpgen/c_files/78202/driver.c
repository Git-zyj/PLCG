#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15064342650859182802ULL;
unsigned short var_2 = (unsigned short)30357;
unsigned short var_3 = (unsigned short)6535;
unsigned char var_4 = (unsigned char)111;
unsigned long long int var_5 = 12903891811133645645ULL;
unsigned long long int var_6 = 8306289506766495234ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)11478;
int var_9 = -337739772;
int zero = 0;
unsigned short var_10 = (unsigned short)30845;
unsigned char var_11 = (unsigned char)252;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)64765;
unsigned short var_14 = (unsigned short)23725;
unsigned long long int var_15 = 11104366049157193305ULL;
signed char var_16 = (signed char)-27;
unsigned short var_17 = (unsigned short)48597;
unsigned int var_18 = 3304508754U;
unsigned short var_19 = (unsigned short)36101;
unsigned char var_20 = (unsigned char)179;
unsigned long long int var_21 = 14206862313747215332ULL;
long long int var_22 = -6378825437523062455LL;
unsigned long long int arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_2 [14] [14] [14] ;
unsigned long long int arr_3 [14] [14] ;
unsigned short arr_4 [14] [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned long long int arr_6 [14] ;
unsigned short arr_7 [14] [14] [14] ;
_Bool arr_8 [14] [14] [14] [14] [14] [14] ;
signed char arr_12 [14] [14] [14] ;
unsigned long long int arr_15 [18] ;
unsigned short arr_16 [18] [18] ;
unsigned long long int arr_17 [18] ;
unsigned short arr_18 [18] [18] ;
unsigned char arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16074979160227125517ULL : 3008871036079639271ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11568152531386190670ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 6950657420037194375ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)31799 : (unsigned short)26818;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 16980939495362449099ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1513012015983553249ULL : 10525802246601805368ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)41956 : (unsigned short)36180;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 12080004186471021429ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)31108 : (unsigned short)31660;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = 4283226546972964519ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)14468;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned char)250;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
