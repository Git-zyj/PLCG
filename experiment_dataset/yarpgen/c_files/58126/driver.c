#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1243167563;
unsigned int var_6 = 3983159209U;
unsigned char var_8 = (unsigned char)218;
unsigned long long int var_12 = 1733289263060432058ULL;
int zero = 0;
unsigned int var_13 = 3107245905U;
unsigned short var_14 = (unsigned short)28896;
signed char var_15 = (signed char)114;
short var_16 = (short)18589;
signed char var_17 = (signed char)-73;
unsigned int var_18 = 1219475390U;
signed char var_19 = (signed char)-41;
unsigned short var_20 = (unsigned short)54748;
short var_21 = (short)-13744;
short arr_0 [14] ;
unsigned char arr_3 [14] ;
unsigned short arr_5 [16] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)30249;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)13535;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-90;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
