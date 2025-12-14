#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6766284397373836800ULL;
short var_2 = (short)-28839;
short var_4 = (short)-8113;
unsigned char var_5 = (unsigned char)154;
short var_6 = (short)2192;
unsigned long long int var_7 = 5093462891904801869ULL;
int var_8 = -2129334629;
unsigned char var_9 = (unsigned char)42;
unsigned char var_11 = (unsigned char)2;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)29477;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13744549765702098089ULL;
signed char var_16 = (signed char)78;
unsigned int var_17 = 1320609380U;
signed char arr_0 [24] ;
short arr_1 [24] ;
unsigned char arr_2 [24] ;
signed char arr_3 [24] ;
unsigned int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-11972;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3463077345U : 2701721477U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
