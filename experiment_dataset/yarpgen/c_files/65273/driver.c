#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1296304756;
unsigned char var_4 = (unsigned char)73;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 663807452U;
short var_11 = (short)-18281;
int var_12 = 2028205445;
short var_13 = (short)-7776;
unsigned char var_15 = (unsigned char)59;
int zero = 0;
long long int var_16 = -4771263878835651197LL;
int var_17 = -1343839246;
signed char var_18 = (signed char)-88;
unsigned char var_19 = (unsigned char)140;
unsigned char var_20 = (unsigned char)232;
unsigned int var_21 = 736864887U;
long long int var_22 = 203080210999897476LL;
short var_23 = (short)-31384;
unsigned short arr_0 [16] ;
unsigned char arr_1 [16] ;
_Bool arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
short arr_6 [20] [20] ;
long long int arr_2 [16] ;
long long int arr_7 [20] ;
_Bool arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)19486;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 18217122716455896266ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-14776;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -4150582807408651339LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 3881434888457380126LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
