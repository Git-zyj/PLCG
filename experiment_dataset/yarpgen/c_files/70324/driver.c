#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2447163682U;
unsigned char var_11 = (unsigned char)101;
short var_12 = (short)-11373;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1651625540;
signed char var_18 = (signed char)67;
int var_19 = 1978915025;
signed char arr_0 [23] ;
signed char arr_1 [23] [23] ;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-100;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
