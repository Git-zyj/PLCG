#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
signed char var_3 = (signed char)84;
unsigned short var_8 = (unsigned short)20856;
short var_12 = (short)23168;
unsigned int var_13 = 4202414204U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3719468663U;
long long int var_18 = -6060608845589912295LL;
signed char var_19 = (signed char)-63;
unsigned int var_20 = 2921891320U;
unsigned int var_21 = 1286138419U;
unsigned int var_22 = 2276627043U;
short var_23 = (short)-30760;
unsigned int arr_0 [18] ;
long long int arr_1 [18] [18] ;
unsigned short arr_3 [18] ;
unsigned int arr_4 [18] [18] [18] ;
unsigned int arr_7 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3444507610U : 3603773283U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -2744160174249857609LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)53454;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 283313994U : 4072549369U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4263627082U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
