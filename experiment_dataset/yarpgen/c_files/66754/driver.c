#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)17843;
short var_7 = (short)-8907;
signed char var_8 = (signed char)64;
unsigned int var_13 = 2511298986U;
long long int var_14 = -4125869282020900682LL;
int zero = 0;
unsigned long long int var_15 = 7009111743836032976ULL;
unsigned char var_16 = (unsigned char)232;
unsigned long long int var_17 = 13622535324256680951ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_0 [23] ;
long long int arr_1 [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
_Bool arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 10047327787500564123ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 8907118520636182800LL : 6125810514391433838LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1866066760U : 449105040U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
