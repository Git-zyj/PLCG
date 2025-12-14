#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-119;
unsigned int var_4 = 2139073119U;
unsigned char var_5 = (unsigned char)242;
unsigned int var_6 = 2094927010U;
int var_7 = 58758789;
unsigned char var_12 = (unsigned char)85;
int zero = 0;
unsigned int var_16 = 3884877067U;
signed char var_17 = (signed char)-100;
unsigned char var_18 = (unsigned char)214;
unsigned char var_19 = (unsigned char)0;
int var_20 = 2120881238;
int arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_2 [22] ;
int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 973896891;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3995544430U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3518892678U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1371312745;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
