#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
signed char var_3 = (signed char)62;
unsigned int var_9 = 2939263540U;
unsigned char var_11 = (unsigned char)139;
signed char var_12 = (signed char)-6;
signed char var_14 = (signed char)-49;
unsigned int var_16 = 3288120060U;
int zero = 0;
unsigned long long int var_20 = 17562980876934745981ULL;
unsigned long long int var_21 = 6239512978435285685ULL;
unsigned char var_22 = (unsigned char)223;
unsigned char var_23 = (unsigned char)80;
int var_24 = 94379200;
unsigned long long int var_25 = 14072150516323561754ULL;
unsigned short arr_1 [11] ;
short arr_2 [11] [11] ;
unsigned long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)48335;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25734;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3332687449388762284ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
