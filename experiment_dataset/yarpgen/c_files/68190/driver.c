#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4266632885U;
unsigned short var_9 = (unsigned short)47287;
unsigned int var_11 = 344112342U;
int zero = 0;
unsigned short var_18 = (unsigned short)24049;
unsigned short var_19 = (unsigned short)15759;
unsigned int arr_0 [17] ;
unsigned int arr_2 [17] ;
unsigned short arr_3 [17] ;
int arr_4 [17] ;
unsigned short arr_5 [17] [17] ;
unsigned int arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2752025751U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1035294137U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)43102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1898091000;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)24428;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 54513654U : 3217497757U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
