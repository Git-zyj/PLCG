#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40472;
short var_2 = (short)-31212;
int var_3 = 1933796504;
int var_4 = -1860040017;
unsigned int var_5 = 1682614367U;
unsigned char var_6 = (unsigned char)96;
int var_7 = -1837090080;
signed char var_8 = (signed char)-85;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13297489625713182086ULL;
unsigned long long int var_11 = 5976604842750931619ULL;
int zero = 0;
unsigned long long int var_12 = 7595057273899068941ULL;
unsigned short var_13 = (unsigned short)48555;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)100;
long long int var_16 = 1564865256922690117LL;
int var_17 = 2044025795;
unsigned int var_18 = 2117706239U;
unsigned short var_19 = (unsigned short)42911;
int var_20 = -175752982;
int var_21 = -5658940;
short var_22 = (short)-14182;
short arr_4 [23] ;
short arr_10 [23] [23] [23] ;
unsigned char arr_16 [23] ;
unsigned long long int arr_17 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-29984;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-22539 : (short)16343;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)225 : (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 3132688284431854363ULL : 12808362139704429424ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
