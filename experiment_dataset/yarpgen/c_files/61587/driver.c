#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18367539894718602326ULL;
int var_1 = 68528847;
unsigned short var_3 = (unsigned short)65371;
unsigned long long int var_5 = 16098512518357695894ULL;
signed char var_6 = (signed char)-15;
signed char var_8 = (signed char)-31;
signed char var_9 = (signed char)16;
unsigned short var_10 = (unsigned short)13586;
short var_12 = (short)-19417;
int var_14 = 1016655183;
unsigned int var_15 = 4135566918U;
int zero = 0;
unsigned short var_16 = (unsigned short)45644;
int var_17 = -661281825;
unsigned short var_18 = (unsigned short)61645;
int var_19 = 1235862769;
unsigned int var_20 = 908494077U;
short var_21 = (short)22304;
int var_22 = -1425075761;
unsigned char var_23 = (unsigned char)148;
unsigned long long int var_24 = 14049407101868455206ULL;
unsigned int var_25 = 3407011644U;
unsigned int var_26 = 3243788320U;
long long int arr_0 [19] [19] ;
unsigned char arr_1 [19] [19] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
long long int arr_12 [16] [16] [16] ;
short arr_13 [25] ;
short arr_14 [25] ;
long long int arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -7608748576558288544LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 13497689682796281678ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8532582727085111995ULL : 6804782286459846280ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -931053287654139971LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (short)-22030;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (short)-10381;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -1230010501276769746LL : -3172253804490790884LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
