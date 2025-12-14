#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2960439124U;
unsigned char var_7 = (unsigned char)223;
signed char var_8 = (signed char)-52;
int zero = 0;
unsigned short var_11 = (unsigned short)38440;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-113;
unsigned short var_14 = (unsigned short)19365;
signed char var_15 = (signed char)-81;
unsigned char var_16 = (unsigned char)255;
signed char var_17 = (signed char)42;
unsigned char var_18 = (unsigned char)107;
unsigned int var_19 = 3287468293U;
unsigned short arr_0 [16] ;
short arr_1 [16] ;
long long int arr_4 [15] ;
unsigned long long int arr_2 [16] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)64468;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)12527;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -120203384133047850LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 12082641442095938014ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -727201298;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
