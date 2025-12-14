#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3002614719U;
unsigned int var_6 = 600336586U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)12;
int zero = 0;
int var_14 = 1915283328;
signed char var_15 = (signed char)62;
unsigned short var_16 = (unsigned short)14906;
unsigned char var_17 = (unsigned char)129;
signed char var_18 = (signed char)30;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6225763074627642301LL;
unsigned short var_21 = (unsigned short)42525;
unsigned int var_22 = 1919805544U;
short arr_0 [12] ;
signed char arr_1 [12] ;
unsigned char arr_2 [23] [23] ;
unsigned int arr_3 [23] [23] ;
unsigned char arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-10176;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 2986762290U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
