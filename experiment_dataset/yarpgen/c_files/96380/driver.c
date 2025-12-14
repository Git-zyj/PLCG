#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26898;
int var_1 = 946387417;
long long int var_3 = -6344070234444464485LL;
signed char var_4 = (signed char)-4;
signed char var_7 = (signed char)2;
signed char var_9 = (signed char)-56;
long long int var_12 = 2610448101167726245LL;
signed char var_13 = (signed char)24;
unsigned long long int var_15 = 11904981948920926059ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)31;
int var_17 = -345263923;
unsigned char var_18 = (unsigned char)45;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-9;
unsigned char var_21 = (unsigned char)129;
int var_22 = -1270446379;
signed char var_23 = (signed char)41;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 18076702286978763503ULL;
signed char var_26 = (signed char)115;
unsigned int var_27 = 2368026985U;
int var_28 = -1619890173;
unsigned int arr_2 [13] ;
signed char arr_5 [13] ;
unsigned char arr_7 [17] ;
unsigned long long int arr_9 [17] [17] ;
unsigned short arr_11 [17] [17] [17] ;
unsigned long long int arr_8 [17] ;
short arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 265801374U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 16625838901306433241ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)51331;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 13252532899741679822ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (short)31816;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
