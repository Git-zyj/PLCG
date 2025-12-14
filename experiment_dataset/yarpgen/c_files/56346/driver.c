#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 426614045U;
short var_7 = (short)24445;
unsigned short var_8 = (unsigned short)49009;
short var_11 = (short)-31864;
unsigned short var_15 = (unsigned short)29525;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-14335;
unsigned short var_19 = (unsigned short)10990;
short var_20 = (short)5176;
_Bool var_21 = (_Bool)1;
short arr_1 [14] [14] ;
short arr_2 [14] ;
_Bool arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-12932;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-15910;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
