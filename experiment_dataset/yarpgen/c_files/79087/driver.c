#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3369732838U;
unsigned short var_1 = (unsigned short)40706;
unsigned long long int var_2 = 18082874025209075774ULL;
_Bool var_3 = (_Bool)0;
int var_4 = -850073725;
unsigned int var_5 = 4054378759U;
signed char var_6 = (signed char)-63;
unsigned long long int var_7 = 6373679437453249966ULL;
unsigned long long int var_8 = 8726390549706164803ULL;
short var_9 = (short)-27744;
long long int var_10 = -7521631225391391733LL;
_Bool var_11 = (_Bool)0;
int var_12 = 1326769731;
short var_13 = (short)-2120;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)47813;
unsigned short var_16 = (unsigned short)42310;
unsigned long long int var_17 = 7375712502383519674ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-76;
long long int var_20 = -1968703917987723340LL;
unsigned short var_21 = (unsigned short)58222;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)140;
unsigned char var_24 = (unsigned char)45;
unsigned long long int var_25 = 2776878632774273282ULL;
short var_26 = (short)1437;
_Bool arr_0 [11] ;
unsigned short arr_3 [11] [11] ;
unsigned short arr_4 [11] ;
unsigned long long int arr_5 [11] ;
int arr_6 [11] ;
int arr_7 [11] [11] ;
int arr_8 [11] [11] [11] [11] ;
unsigned char arr_9 [11] [11] [11] [11] ;
_Bool arr_11 [11] [11] [11] [11] [11] ;
_Bool arr_14 [11] [11] [11] ;
long long int arr_17 [23] ;
unsigned short arr_21 [23] [23] ;
unsigned short arr_23 [23] [23] ;
signed char arr_24 [23] [23] [23] [23] ;
unsigned int arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)60946;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48510 : (unsigned short)65373;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5223024584580888890ULL : 11713964415624461644ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1600017490;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 956015366 : 212808067;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1755500907 : -1739656472;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)39 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = -6777810180569574660LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)17037;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)14390;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 2858585680U : 1713529109U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
