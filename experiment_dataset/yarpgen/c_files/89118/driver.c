#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8186920624529622347LL;
unsigned long long int var_1 = 14479635519704350930ULL;
unsigned char var_2 = (unsigned char)141;
unsigned long long int var_4 = 14981698659748070439ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3052599245U;
unsigned int var_10 = 736588693U;
unsigned int var_11 = 2312668893U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1687709304U;
unsigned int var_14 = 2615850170U;
unsigned int var_15 = 165901624U;
unsigned char var_16 = (unsigned char)1;
long long int var_17 = -6387753324865784719LL;
unsigned char var_18 = (unsigned char)123;
unsigned int var_19 = 2250012715U;
_Bool arr_2 [24] [24] ;
long long int arr_5 [24] ;
unsigned long long int arr_10 [25] ;
int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1457150098410285531LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 11481754114163073828ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1912782245;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
