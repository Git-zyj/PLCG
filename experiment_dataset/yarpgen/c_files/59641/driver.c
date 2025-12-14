#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7365822176766557425LL;
long long int var_4 = -4651679234205240883LL;
short var_6 = (short)5678;
unsigned char var_8 = (unsigned char)255;
unsigned char var_10 = (unsigned char)61;
unsigned char var_11 = (unsigned char)24;
long long int var_12 = -4810826294947648993LL;
long long int var_15 = 4952427239334945204LL;
int zero = 0;
int var_17 = 1716481672;
unsigned long long int var_18 = 13448977789695710250ULL;
short var_19 = (short)-12854;
unsigned long long int var_20 = 6584985852518618998ULL;
unsigned long long int var_21 = 2460269824361474291ULL;
int var_22 = -1961100390;
short arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)30428;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 5492597001073193058ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)4831;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
