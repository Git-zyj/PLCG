#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7091;
unsigned int var_3 = 2199929361U;
signed char var_5 = (signed char)-30;
int var_8 = 1835024113;
short var_9 = (short)8594;
signed char var_11 = (signed char)70;
long long int var_14 = -3542374682264419522LL;
unsigned int var_15 = 2973886902U;
unsigned long long int var_16 = 10191162988243091271ULL;
int zero = 0;
unsigned int var_17 = 785033564U;
unsigned long long int var_18 = 7157239595599835324ULL;
short var_19 = (short)23065;
long long int var_20 = -7889533468983607070LL;
long long int arr_2 [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 9016795984538299818LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -5780881200604370663LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
