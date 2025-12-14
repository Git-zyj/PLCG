#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_14 = 5117167701015128574ULL;
unsigned int var_15 = 4089916436U;
unsigned short var_16 = (unsigned short)38283;
unsigned char var_17 = (unsigned char)210;
unsigned char arr_0 [19] ;
unsigned short arr_2 [19] ;
unsigned int arr_3 [19] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)48009;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 239874195U : 847829380U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)11433;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
