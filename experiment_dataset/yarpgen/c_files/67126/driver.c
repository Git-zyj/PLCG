#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3476099012173521716LL;
int var_4 = 288370266;
short var_5 = (short)-25900;
int var_6 = 1608771124;
unsigned long long int var_7 = 14651369972965607007ULL;
signed char var_8 = (signed char)-98;
unsigned long long int var_9 = 14927337868929991566ULL;
signed char var_10 = (signed char)16;
short var_12 = (short)29512;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
short var_14 = (short)7883;
unsigned int var_15 = 1739677239U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)115;
signed char var_18 = (signed char)42;
short var_19 = (short)-15639;
unsigned int var_20 = 2905904584U;
signed char var_21 = (signed char)67;
unsigned long long int var_22 = 13168551722375677001ULL;
int var_23 = 1595688563;
unsigned long long int arr_0 [14] ;
int arr_1 [14] ;
long long int arr_3 [19] ;
signed char arr_4 [19] [19] ;
unsigned short arr_6 [23] ;
unsigned long long int arr_7 [23] ;
short arr_8 [23] ;
short arr_2 [14] ;
int arr_5 [19] ;
signed char arr_9 [23] ;
signed char arr_12 [23] [23] ;
_Bool arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2041734933224460672ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -177037199 : -814404718;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -4768951524659163096LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)17222;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1722692219296727384ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-20150;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)24149 : (short)-31228;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 97927093;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
