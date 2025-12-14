#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -559022819;
unsigned int var_2 = 3695911260U;
short var_3 = (short)16034;
int var_4 = -1225639922;
unsigned char var_5 = (unsigned char)85;
int var_7 = 1029458588;
short var_11 = (short)12858;
signed char var_13 = (signed char)117;
int zero = 0;
unsigned long long int var_14 = 4118178333702837055ULL;
signed char var_15 = (signed char)-91;
int var_16 = -54785164;
unsigned int var_17 = 2697594811U;
short arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned short arr_3 [25] ;
unsigned int arr_4 [25] ;
short arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)14504;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)46200;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2649536339U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18776;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
