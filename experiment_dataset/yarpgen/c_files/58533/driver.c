#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned char var_1 = (unsigned char)33;
unsigned int var_4 = 2029225166U;
unsigned char var_7 = (unsigned char)231;
unsigned char var_8 = (unsigned char)252;
unsigned int var_9 = 643539437U;
unsigned int var_13 = 2643114090U;
unsigned char var_15 = (unsigned char)14;
unsigned int var_16 = 2517333692U;
unsigned int var_17 = 2666248684U;
unsigned int var_18 = 1193946079U;
int zero = 0;
unsigned int var_20 = 4110603878U;
unsigned int var_21 = 355884370U;
unsigned char var_22 = (unsigned char)73;
unsigned char var_23 = (unsigned char)53;
unsigned int arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1280755313U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 556673497U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
