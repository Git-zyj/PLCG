#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)80;
unsigned short var_3 = (unsigned short)51961;
unsigned char var_4 = (unsigned char)91;
unsigned short var_6 = (unsigned short)8230;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)227;
unsigned long long int var_11 = 16334474272749500982ULL;
unsigned long long int var_13 = 13214991668498502242ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)7446;
short var_16 = (short)32164;
int zero = 0;
short var_17 = (short)11568;
unsigned int var_18 = 4245713413U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)209;
unsigned long long int var_21 = 10438429876815540347ULL;
signed char var_22 = (signed char)124;
unsigned int var_23 = 64795817U;
unsigned int var_24 = 2496955717U;
_Bool var_25 = (_Bool)0;
unsigned long long int arr_0 [10] ;
short arr_1 [10] ;
short arr_5 [12] ;
short arr_7 [12] [12] ;
unsigned int arr_8 [12] [12] ;
signed char arr_2 [10] [10] ;
unsigned char arr_3 [10] [10] ;
unsigned short arr_4 [10] ;
int arr_9 [12] ;
short arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 14050644010017624806ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)27901;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-9032 : (short)3231;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-8668 : (short)18774;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 2372008899U : 1824512985U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)39209;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -225386959 : 1173454682;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-32546 : (short)-3301;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
