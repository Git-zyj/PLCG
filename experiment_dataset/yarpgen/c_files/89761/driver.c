#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1572655778;
long long int var_5 = -6776952914631428221LL;
unsigned long long int var_6 = 10086123264628398523ULL;
unsigned char var_9 = (unsigned char)213;
int zero = 0;
unsigned int var_11 = 737916546U;
unsigned long long int var_12 = 13543482095910467942ULL;
long long int var_13 = -4492992270588913880LL;
unsigned short var_14 = (unsigned short)16055;
int var_15 = 1961867532;
_Bool var_16 = (_Bool)0;
signed char arr_1 [15] ;
unsigned long long int arr_2 [15] [15] [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11279359701793152781ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 12557575965408895059ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
