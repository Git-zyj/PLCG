#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1218440082U;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3154993144U;
unsigned char var_14 = (unsigned char)78;
int var_15 = -1748633542;
unsigned char var_16 = (unsigned char)140;
long long int var_17 = -7674483495388399471LL;
signed char var_18 = (signed char)-72;
_Bool arr_1 [23] ;
unsigned short arr_3 [23] ;
unsigned int arr_4 [23] [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)18338;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 3422547496U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)16;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
