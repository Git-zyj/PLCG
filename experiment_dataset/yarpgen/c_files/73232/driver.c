#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51523;
_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)179;
unsigned short var_10 = (unsigned short)59970;
short var_11 = (short)-19751;
short var_13 = (short)31253;
long long int var_14 = -3618910436608159238LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)9519;
signed char var_20 = (signed char)62;
long long int var_21 = -3691598565656721993LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)29774;
_Bool arr_0 [12] ;
short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)18175;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
