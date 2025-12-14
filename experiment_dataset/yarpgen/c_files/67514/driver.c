#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5417696209469979267LL;
long long int var_4 = -597170405520636222LL;
long long int var_5 = 3608134662911229410LL;
long long int var_6 = -4113664388917811335LL;
int var_7 = 46756152;
unsigned char var_8 = (unsigned char)233;
short var_11 = (short)3746;
unsigned int var_12 = 273820783U;
int zero = 0;
short var_13 = (short)31074;
long long int var_14 = -937682106282074395LL;
unsigned char var_15 = (unsigned char)165;
long long int var_16 = 3607983410258197626LL;
unsigned int var_17 = 3922726541U;
_Bool var_18 = (_Bool)0;
unsigned char arr_0 [11] ;
long long int arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
unsigned int arr_3 [11] [11] ;
unsigned char arr_5 [11] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 6598883293436712513LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2330487812U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3583254365U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
