#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)234;
long long int var_6 = -3742378042540032379LL;
int var_7 = 1538143228;
unsigned char var_8 = (unsigned char)163;
unsigned short var_10 = (unsigned short)2016;
unsigned int var_11 = 4100657272U;
unsigned short var_14 = (unsigned short)4354;
int zero = 0;
unsigned long long int var_16 = 4432252127917702179ULL;
unsigned int var_17 = 653819955U;
unsigned char var_18 = (unsigned char)223;
unsigned char var_19 = (unsigned char)75;
int var_20 = 807363868;
unsigned short var_21 = (unsigned short)22382;
unsigned long long int arr_0 [10] ;
short arr_2 [10] ;
unsigned short arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4104845939263067071ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)11202;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)53115;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
