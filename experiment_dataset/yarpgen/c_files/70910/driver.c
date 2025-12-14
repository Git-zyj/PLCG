#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)193;
signed char var_10 = (signed char)33;
short var_11 = (short)-12817;
long long int var_12 = 3735862954955548156LL;
unsigned short var_13 = (unsigned short)44000;
unsigned char var_14 = (unsigned char)4;
signed char var_16 = (signed char)59;
signed char var_18 = (signed char)-53;
int zero = 0;
short var_19 = (short)-29140;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)23001;
short var_22 = (short)6371;
unsigned short var_23 = (unsigned short)10347;
int var_24 = -1224110547;
unsigned int arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1720959033U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)221;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
