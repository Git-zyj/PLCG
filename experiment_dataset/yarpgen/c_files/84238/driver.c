#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 493500780;
unsigned short var_6 = (unsigned short)51909;
unsigned short var_10 = (unsigned short)34985;
short var_18 = (short)-21453;
int zero = 0;
short var_19 = (short)10303;
int var_20 = 706055034;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-3795;
unsigned short var_23 = (unsigned short)46118;
signed char var_24 = (signed char)75;
short arr_1 [19] [19] ;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)1094;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-4800;
}

void checksum() {
    hash(&seed, var_19);
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
