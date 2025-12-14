#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned short var_1 = (unsigned short)27498;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)91;
signed char var_8 = (signed char)21;
long long int var_9 = 6628725431540659663LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13583268620811213562ULL;
unsigned char var_12 = (unsigned char)144;
unsigned char var_13 = (unsigned char)253;
unsigned long long int var_14 = 17415484519874291933ULL;
unsigned long long int var_15 = 2164276900365933887ULL;
signed char var_16 = (signed char)-101;
signed char var_17 = (signed char)74;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3318804279U;
unsigned int var_20 = 3042377222U;
_Bool var_21 = (_Bool)0;
signed char arr_0 [13] ;
int arr_1 [13] ;
unsigned short arr_4 [13] [13] ;
int arr_7 [14] ;
int arr_9 [14] [14] ;
unsigned char arr_10 [14] [14] [14] ;
signed char arr_11 [14] [14] [14] ;
unsigned char arr_12 [14] ;
unsigned long long int arr_13 [14] [14] ;
unsigned short arr_15 [14] [14] [14] ;
unsigned long long int arr_16 [14] ;
_Bool arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -735242388;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)35250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1355745436;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 415358989;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 3940056702844441792ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)25885;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 9916220657982100272ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
