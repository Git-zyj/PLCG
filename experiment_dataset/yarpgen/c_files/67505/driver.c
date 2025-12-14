#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30428;
unsigned char var_1 = (unsigned char)209;
int var_2 = 1610101324;
unsigned short var_3 = (unsigned short)16865;
unsigned int var_4 = 1197581469U;
_Bool var_5 = (_Bool)0;
int var_7 = 1294485986;
int var_8 = 176368263;
unsigned int var_10 = 1600064423U;
unsigned int var_11 = 1809221620U;
int zero = 0;
short var_13 = (short)22272;
short var_14 = (short)7566;
unsigned short var_15 = (unsigned short)61346;
_Bool var_16 = (_Bool)1;
unsigned short arr_0 [12] ;
unsigned int arr_2 [12] ;
long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)28922;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 138576757U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -5450341968063383014LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
