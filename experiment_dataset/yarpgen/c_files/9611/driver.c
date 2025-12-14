#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3472180153U;
unsigned short var_3 = (unsigned short)61033;
unsigned short var_4 = (unsigned short)59058;
int var_6 = 1677422070;
unsigned long long int var_8 = 1024154138857574436ULL;
long long int var_9 = 1409645375843609656LL;
int var_13 = -825531918;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)13078;
signed char var_21 = (signed char)120;
unsigned char var_22 = (unsigned char)241;
unsigned char var_23 = (unsigned char)213;
long long int var_24 = 5563547389428654710LL;
unsigned int var_25 = 1180554173U;
short var_26 = (short)-25173;
short var_27 = (short)17905;
_Bool var_28 = (_Bool)0;
short var_29 = (short)7461;
short var_30 = (short)-7338;
long long int arr_1 [23] ;
unsigned long long int arr_2 [23] [23] [23] ;
int arr_5 [23] ;
signed char arr_6 [23] [23] ;
unsigned char arr_7 [23] [23] ;
long long int arr_8 [23] ;
unsigned int arr_9 [23] [23] [23] ;
int arr_10 [23] ;
_Bool arr_12 [23] [23] [23] [23] [23] ;
unsigned long long int arr_13 [23] [23] [23] [23] [23] [23] ;
_Bool arr_15 [20] ;
unsigned char arr_16 [20] ;
short arr_17 [20] ;
short arr_19 [20] ;
int arr_22 [20] [20] [20] ;
int arr_28 [20] [20] [20] [20] [20] ;
short arr_14 [23] [23] [23] ;
_Bool arr_21 [20] ;
long long int arr_29 [20] [20] [20] [20] [20] ;
long long int arr_32 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3857016931826730619LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 12746037357264756941ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -1127147502;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1700500563740896388LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3365859405U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 1133532675;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 15366141176475802831ULL : 6622841555195519857ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (short)-14747;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (short)23785;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 101826005;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = -145270775;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)25086 : (short)-4693;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 3703176942966944086LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = -3603406263103071093LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
