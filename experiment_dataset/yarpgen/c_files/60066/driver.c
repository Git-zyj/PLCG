#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4157751286U;
unsigned int var_2 = 241105723U;
unsigned char var_3 = (unsigned char)34;
unsigned long long int var_5 = 15658664137763201551ULL;
unsigned char var_6 = (unsigned char)153;
unsigned int var_14 = 2346184361U;
int zero = 0;
unsigned short var_15 = (unsigned short)12613;
unsigned short var_16 = (unsigned short)25700;
signed char var_17 = (signed char)15;
unsigned long long int var_18 = 7937746737657585734ULL;
signed char arr_0 [20] ;
unsigned long long int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 43880125406981813ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
