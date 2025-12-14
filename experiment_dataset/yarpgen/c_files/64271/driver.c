#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2663845314U;
unsigned long long int var_1 = 2744659963881532224ULL;
signed char var_2 = (signed char)-75;
int var_3 = -672067666;
unsigned char var_4 = (unsigned char)83;
long long int var_5 = -5285246277485250491LL;
long long int var_6 = 5103567445050423664LL;
signed char var_7 = (signed char)-23;
_Bool var_8 = (_Bool)1;
long long int var_9 = -129896742998767404LL;
unsigned long long int var_10 = 16450002839414300219ULL;
unsigned long long int var_11 = 1354271366097003963ULL;
signed char var_12 = (signed char)23;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)64829;
unsigned char var_15 = (unsigned char)22;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10077062182439861401ULL;
_Bool var_18 = (_Bool)0;
int var_19 = 1630719560;
short var_20 = (short)5192;
unsigned int var_21 = 1401454784U;
unsigned int var_22 = 2798722837U;
unsigned short var_23 = (unsigned short)59652;
unsigned short var_24 = (unsigned short)56064;
unsigned long long int var_25 = 2407478986159411313ULL;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-810;
unsigned char var_28 = (unsigned char)167;
unsigned char var_29 = (unsigned char)47;
short arr_0 [12] ;
unsigned long long int arr_2 [12] ;
unsigned char arr_3 [12] ;
_Bool arr_5 [12] [12] ;
signed char arr_6 [12] [12] [12] ;
_Bool arr_10 [25] [25] ;
long long int arr_11 [25] ;
unsigned int arr_12 [25] [25] [25] ;
unsigned int arr_14 [25] [25] ;
unsigned int arr_15 [25] ;
long long int arr_16 [25] ;
unsigned int arr_17 [25] ;
long long int arr_22 [25] ;
short arr_4 [12] [12] ;
_Bool arr_19 [25] ;
_Bool arr_20 [25] ;
_Bool arr_23 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)26005;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13644585593856508555ULL : 6757008645642748410ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-22 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -4003942056394271357LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1000492014U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 1407062422U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 945375868U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 4944020414782857939LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 2605665232U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = 2842452226350119545LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-20896 : (short)8864;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
