#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7820416692712454227ULL;
unsigned int var_4 = 1384730143U;
unsigned long long int var_6 = 3373370946649209380ULL;
short var_11 = (short)14566;
long long int var_14 = 3229528412937220174LL;
long long int var_15 = 3333709467033606933LL;
short var_16 = (short)-2827;
int zero = 0;
unsigned char var_18 = (unsigned char)148;
long long int var_19 = 7322718140132462602LL;
long long int var_20 = 607033699859943846LL;
short var_21 = (short)-20140;
int var_22 = 1882660273;
unsigned int var_23 = 669667026U;
unsigned long long int var_24 = 14365963657084403545ULL;
long long int var_25 = -3877093105368693002LL;
short var_26 = (short)-4059;
unsigned long long int var_27 = 2786597154931747099ULL;
short var_28 = (short)5020;
int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
signed char arr_2 [10] ;
unsigned long long int arr_3 [12] ;
short arr_6 [12] [12] ;
short arr_9 [15] ;
unsigned char arr_11 [15] [15] ;
int arr_7 [12] ;
_Bool arr_8 [12] [12] ;
unsigned long long int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -123727024;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 15103639231475617903ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3664868238264130331ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (short)32316;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)17466;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 114515333;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 2740288773113417431ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
