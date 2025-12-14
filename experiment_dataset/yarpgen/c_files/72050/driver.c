#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3508872573U;
long long int var_2 = 4519375293970165728LL;
long long int var_3 = -3850055334473923837LL;
unsigned int var_6 = 2597313179U;
unsigned int var_8 = 2013415680U;
int var_9 = -1496620166;
unsigned long long int var_10 = 40541342708548047ULL;
unsigned short var_11 = (unsigned short)58410;
_Bool var_12 = (_Bool)0;
long long int var_13 = 4105248998543039329LL;
signed char var_14 = (signed char)13;
int zero = 0;
signed char var_15 = (signed char)120;
unsigned short var_16 = (unsigned short)44798;
short var_17 = (short)3615;
int var_18 = 1749731453;
int var_19 = 484448921;
unsigned short var_20 = (unsigned short)4922;
unsigned short var_21 = (unsigned short)48873;
unsigned char var_22 = (unsigned char)221;
signed char var_23 = (signed char)18;
int var_24 = 2050167753;
unsigned long long int var_25 = 15188366494653660797ULL;
short var_26 = (short)-24211;
_Bool arr_0 [17] ;
int arr_3 [23] ;
long long int arr_4 [23] ;
int arr_5 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
long long int arr_11 [23] ;
_Bool arr_16 [16] [16] ;
short arr_2 [17] ;
unsigned char arr_13 [23] ;
signed char arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1443954702 : 1160276250;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2093010606678334044LL : 6696149353606551748LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1917863750 : -1073504946;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 8815988889227899948ULL : 11378347357038573376ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -253769948945504912LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-10056;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)108;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
