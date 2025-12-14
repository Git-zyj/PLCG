#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)213;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
short var_18 = (short)2651;
long long int var_19 = 4671427379330578125LL;
unsigned int var_20 = 4212404060U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)10431;
_Bool var_23 = (_Bool)0;
unsigned char arr_0 [23] ;
unsigned long long int arr_1 [23] ;
short arr_2 [23] [23] ;
signed char arr_3 [16] ;
int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 6318559844954260174ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)29897;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -1461481297;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
