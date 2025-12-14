#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 837626661884359808ULL;
unsigned long long int var_5 = 411777152561133747ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)24962;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)46208;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)8628;
unsigned long long int var_20 = 11070687523321307089ULL;
unsigned short var_21 = (unsigned short)42643;
unsigned int var_22 = 2196208472U;
unsigned long long int arr_0 [24] ;
_Bool arr_1 [24] ;
unsigned int arr_3 [24] ;
unsigned int arr_2 [24] ;
unsigned int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 5559092364752371640ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3023252815U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 381055478U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1821994696U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
