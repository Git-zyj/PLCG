#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned long long int var_1 = 8878545312437321888ULL;
long long int var_2 = -7423546392035967937LL;
long long int var_4 = 2175319566925189201LL;
signed char var_5 = (signed char)91;
signed char var_6 = (signed char)121;
unsigned int var_7 = 4168916115U;
unsigned char var_9 = (unsigned char)97;
unsigned int var_11 = 60148521U;
unsigned long long int var_12 = 4062106862237620193ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
long long int var_14 = -2419203775842836018LL;
unsigned int var_15 = 586397295U;
signed char var_16 = (signed char)-105;
unsigned char var_17 = (unsigned char)11;
long long int var_18 = -7197691112809692760LL;
signed char arr_0 [22] [22] ;
unsigned long long int arr_2 [22] ;
_Bool arr_4 [22] ;
signed char arr_10 [22] ;
signed char arr_3 [22] [22] ;
signed char arr_8 [22] ;
unsigned int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1281017667933717461ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 3196284088U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
