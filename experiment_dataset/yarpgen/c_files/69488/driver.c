#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4239117903U;
unsigned int var_4 = 2581300055U;
unsigned int var_8 = 3080090933U;
int zero = 0;
unsigned int var_10 = 2365075942U;
unsigned int var_11 = 3163141435U;
unsigned int var_12 = 1023984121U;
unsigned int var_13 = 4236776177U;
unsigned int arr_1 [13] ;
unsigned int arr_3 [16] ;
unsigned int arr_5 [16] ;
unsigned int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 446534090U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2415608374U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 842428826U : 3996333329U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2386317235U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
