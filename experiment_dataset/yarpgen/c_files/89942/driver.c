#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1480043739498905367ULL;
signed char var_6 = (signed char)-99;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)48924;
_Bool var_9 = (_Bool)0;
int var_10 = -1484699739;
signed char var_13 = (signed char)-53;
int zero = 0;
unsigned int var_14 = 1390112002U;
unsigned char var_15 = (unsigned char)232;
int var_16 = 512651868;
unsigned short var_17 = (unsigned short)65232;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)31640;
unsigned long long int var_20 = 17954334672690251931ULL;
unsigned long long int var_21 = 17173998278930744788ULL;
signed char arr_0 [16] ;
unsigned long long int arr_6 [16] ;
unsigned int arr_2 [16] ;
_Bool arr_3 [16] [16] ;
long long int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 3763562719493555243ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2338125366U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = -146634039511472806LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
