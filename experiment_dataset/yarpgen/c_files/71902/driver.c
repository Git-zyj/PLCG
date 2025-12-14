#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4916802841916096686ULL;
unsigned int var_1 = 1920739926U;
unsigned char var_2 = (unsigned char)40;
signed char var_3 = (signed char)-110;
unsigned long long int var_4 = 15683724882518922622ULL;
unsigned long long int var_5 = 6528318108293156722ULL;
unsigned int var_7 = 2190481914U;
int var_8 = -620752594;
_Bool var_10 = (_Bool)0;
long long int var_11 = 7141953161102001559LL;
int zero = 0;
signed char var_12 = (signed char)3;
unsigned short var_13 = (unsigned short)49473;
int var_14 = 1434932211;
unsigned int var_15 = 3665028807U;
unsigned int var_16 = 253263824U;
unsigned char var_17 = (unsigned char)253;
_Bool var_18 = (_Bool)1;
short arr_0 [16] [16] ;
_Bool arr_1 [16] ;
unsigned int arr_2 [16] [16] [16] ;
unsigned int arr_3 [16] ;
unsigned char arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16705;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3202122094U : 1590667124U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2713020048U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
