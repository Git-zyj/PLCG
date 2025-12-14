#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37844;
short var_3 = (short)4377;
signed char var_5 = (signed char)-67;
unsigned char var_9 = (unsigned char)49;
unsigned char var_10 = (unsigned char)75;
unsigned short var_11 = (unsigned short)41624;
unsigned int var_12 = 1602048944U;
long long int var_14 = 2527183265614616724LL;
int zero = 0;
int var_15 = 1853120814;
unsigned long long int var_16 = 11585460130524399822ULL;
short var_17 = (short)31096;
unsigned short var_18 = (unsigned short)2787;
unsigned int var_19 = 1963589434U;
long long int var_20 = -303144301431588020LL;
unsigned short var_21 = (unsigned short)19993;
unsigned char var_22 = (unsigned char)1;
unsigned int var_23 = 543255355U;
unsigned long long int var_24 = 3261111198832198422ULL;
long long int var_25 = 3448865011105611607LL;
long long int var_26 = -5318847227935083215LL;
long long int arr_0 [13] [13] ;
unsigned char arr_1 [13] [13] ;
unsigned long long int arr_2 [13] ;
long long int arr_3 [13] ;
unsigned int arr_4 [13] ;
long long int arr_12 [13] [13] ;
unsigned long long int arr_7 [13] ;
unsigned short arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -5855896564497105027LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6647145952158702980ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -8964559456489053972LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 2975036283U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 3559306248522843181LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 5556871694978923883ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)45384;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
