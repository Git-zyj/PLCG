#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -773250756;
unsigned short var_6 = (unsigned short)49724;
unsigned char var_8 = (unsigned char)247;
short var_10 = (short)-18651;
unsigned int var_11 = 1169482951U;
short var_13 = (short)-19799;
int var_17 = -531238711;
short var_18 = (short)-8319;
int zero = 0;
int var_19 = 1452211252;
unsigned char var_20 = (unsigned char)74;
unsigned char var_21 = (unsigned char)252;
unsigned char var_22 = (unsigned char)183;
signed char var_23 = (signed char)-41;
unsigned long long int var_24 = 2326422800194485522ULL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)61;
unsigned int arr_2 [10] ;
unsigned long long int arr_5 [11] [11] ;
short arr_7 [11] ;
long long int arr_8 [11] ;
unsigned long long int arr_11 [11] [11] [11] [11] [11] ;
unsigned char arr_12 [11] [11] [11] [11] ;
unsigned char arr_13 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4146604130U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 13802350476072957920ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)9674;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -2861583773374935947LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 16056298499646635994ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)43;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
