#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2194296935541725991LL;
unsigned int var_3 = 490062988U;
short var_8 = (short)2110;
long long int var_12 = -7387569180488878194LL;
signed char var_13 = (signed char)39;
unsigned long long int var_14 = 14214227966483289127ULL;
long long int var_18 = -5451619632093363430LL;
unsigned int var_19 = 324758045U;
int zero = 0;
unsigned long long int var_20 = 6597503562038487929ULL;
unsigned int var_21 = 253501237U;
unsigned char var_22 = (unsigned char)188;
unsigned long long int var_23 = 2297391324503291876ULL;
long long int var_24 = -93941521842284633LL;
unsigned short var_25 = (unsigned short)28499;
unsigned short var_26 = (unsigned short)48433;
int arr_0 [22] ;
signed char arr_1 [22] ;
unsigned short arr_2 [22] ;
short arr_6 [25] ;
_Bool arr_7 [25] ;
unsigned long long int arr_8 [25] ;
unsigned long long int arr_3 [22] ;
long long int arr_4 [22] [22] ;
unsigned char arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1335847647;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)46874;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-20096;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 17788637867487417945ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 13338780605488985544ULL : 663662786741130116ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1100080299414767924LL : -8634229414318740964LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)6;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
