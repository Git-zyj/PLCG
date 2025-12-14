#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17728;
unsigned long long int var_1 = 3470445776876882146ULL;
unsigned int var_2 = 3450364511U;
unsigned long long int var_4 = 15710490399391036180ULL;
long long int var_5 = -8524591758634570945LL;
signed char var_6 = (signed char)36;
_Bool var_7 = (_Bool)0;
int var_8 = 306219541;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)54500;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -20478946;
unsigned long long int var_13 = 7199834548447052211ULL;
unsigned long long int var_14 = 1227747129087901488ULL;
unsigned int var_15 = 415487499U;
unsigned long long int var_16 = 9537612931212159960ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3479251515U;
_Bool var_19 = (_Bool)0;
unsigned int arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
long long int arr_2 [16] ;
unsigned long long int arr_3 [16] [16] ;
unsigned short arr_11 [19] ;
unsigned int arr_8 [16] ;
unsigned short arr_9 [16] [16] ;
_Bool arr_12 [19] ;
_Bool arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2667459963U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)64417;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 6398720736124874159LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2809426020935868458ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)23322;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 197510494U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)60880;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
