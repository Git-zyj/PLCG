#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8653473300256662606LL;
unsigned short var_1 = (unsigned short)35475;
unsigned char var_12 = (unsigned char)174;
unsigned long long int var_13 = 8873947862136184736ULL;
unsigned short var_15 = (unsigned short)44495;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
unsigned short var_18 = (unsigned short)8160;
long long int var_19 = -6668015858104432199LL;
int var_20 = -1793344444;
unsigned short var_21 = (unsigned short)30271;
unsigned short var_22 = (unsigned short)32967;
unsigned short var_23 = (unsigned short)8627;
unsigned int arr_1 [13] [13] ;
unsigned char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 715263328U : 2869424681U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)232;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
