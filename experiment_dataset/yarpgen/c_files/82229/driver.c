#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 193684045U;
unsigned int var_3 = 3934932164U;
unsigned int var_9 = 3940667256U;
unsigned int var_12 = 3643247763U;
unsigned int var_16 = 3124228116U;
int zero = 0;
unsigned int var_18 = 3552758115U;
unsigned int var_19 = 2162387109U;
unsigned int var_20 = 1141347060U;
unsigned int var_21 = 277668830U;
unsigned int var_22 = 3170509833U;
unsigned int arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 332198992U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2799652000U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3974274415U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 576309931U : 1447475611U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
