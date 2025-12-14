#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)5951;
int var_4 = -1045873083;
int var_8 = 221427066;
unsigned short var_9 = (unsigned short)15016;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)70;
signed char var_16 = (signed char)23;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)29882;
unsigned char var_20 = (unsigned char)34;
unsigned short var_21 = (unsigned short)12760;
unsigned int var_22 = 3107424055U;
unsigned short var_23 = (unsigned short)51409;
_Bool var_24 = (_Bool)0;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
short arr_2 [22] ;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-13392;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)21115;
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
