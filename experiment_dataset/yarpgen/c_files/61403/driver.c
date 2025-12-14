#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1461420172U;
unsigned int var_1 = 206790958U;
unsigned int var_2 = 1553947931U;
unsigned char var_4 = (unsigned char)218;
unsigned int var_5 = 3091583821U;
unsigned int var_7 = 2183059518U;
unsigned int var_9 = 943724102U;
unsigned char var_10 = (unsigned char)214;
unsigned int var_11 = 1081150047U;
int zero = 0;
unsigned char var_12 = (unsigned char)205;
unsigned short var_13 = (unsigned short)38076;
unsigned int var_14 = 1607483710U;
unsigned int var_15 = 4078769962U;
unsigned char var_16 = (unsigned char)88;
unsigned char arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
unsigned short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)39 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2386807214U : 921463553U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60722 : (unsigned short)43689;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
