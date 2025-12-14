#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)122;
long long int var_4 = -6435883884448884399LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)38641;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-97;
long long int var_11 = -159801631633350994LL;
long long int var_15 = -7458465798398045541LL;
unsigned short var_16 = (unsigned short)38334;
int zero = 0;
long long int var_17 = 4927008945867374724LL;
signed char var_18 = (signed char)33;
unsigned long long int var_19 = 5539871989174528271ULL;
unsigned char var_20 = (unsigned char)38;
long long int var_21 = -5339652113429189154LL;
long long int var_22 = 2236023530643352632LL;
short var_23 = (short)27713;
signed char var_24 = (signed char)12;
long long int var_25 = -3770554971649152221LL;
long long int arr_8 [24] ;
_Bool arr_3 [16] ;
short arr_4 [16] ;
long long int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1528794037984319714LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)31465;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 6861921474232361LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
