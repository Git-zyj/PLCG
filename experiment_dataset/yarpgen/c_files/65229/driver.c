#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 232506043U;
int var_8 = 1324729047;
short var_11 = (short)-14732;
int var_13 = -948937825;
unsigned long long int var_15 = 14412004849108006489ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)61496;
signed char var_19 = (signed char)-21;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)55308;
short var_22 = (short)-4035;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1510620735U;
_Bool var_25 = (_Bool)1;
short arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
long long int arr_2 [20] ;
_Bool arr_3 [20] ;
_Bool arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14876;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 877425338U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1951115624179465708LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
