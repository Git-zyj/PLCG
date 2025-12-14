#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)6407;
long long int var_7 = -3264272556327047127LL;
signed char var_8 = (signed char)65;
unsigned short var_9 = (unsigned short)35337;
signed char var_11 = (signed char)3;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1607068326U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)38;
unsigned long long int var_17 = 12850309094558834963ULL;
unsigned short var_18 = (unsigned short)6259;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)22071;
unsigned short var_22 = (unsigned short)16636;
signed char arr_0 [11] ;
int arr_3 [11] ;
unsigned char arr_6 [11] [11] [11] ;
unsigned short arr_7 [11] [11] [11] ;
_Bool arr_8 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -484124909;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)54942;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 2197019437939650787ULL;
}

void checksum() {
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
