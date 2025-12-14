#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1008341746U;
unsigned int var_6 = 1495984043U;
unsigned char var_7 = (unsigned char)118;
unsigned int var_8 = 3813600183U;
unsigned int var_12 = 1765203102U;
short var_14 = (short)256;
int zero = 0;
unsigned int var_20 = 184180650U;
unsigned int var_21 = 3480511136U;
unsigned int var_22 = 1953491075U;
unsigned int var_23 = 3582494293U;
unsigned int var_24 = 3624604216U;
signed char var_25 = (signed char)-8;
signed char var_26 = (signed char)-38;
_Bool arr_0 [25] [25] ;
short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-2686;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
