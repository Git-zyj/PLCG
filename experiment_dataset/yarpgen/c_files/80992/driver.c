#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)43107;
unsigned long long int var_9 = 2834630516448441019ULL;
unsigned long long int var_11 = 8913798015978789160ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 3540236990U;
unsigned long long int var_17 = 3871053274209670134ULL;
short var_19 = (short)-12163;
int zero = 0;
unsigned short var_20 = (unsigned short)40264;
unsigned int var_21 = 3768586803U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 1999359688413989539LL;
short var_24 = (short)-14890;
unsigned int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned char arr_3 [23] ;
long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 2726117954U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7889714031621220333LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2422690811990209829LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
