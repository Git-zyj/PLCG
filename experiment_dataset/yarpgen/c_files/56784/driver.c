#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2651777347769246923LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7250291694466978225ULL;
unsigned long long int var_6 = 10628620970291518052ULL;
signed char var_9 = (signed char)87;
unsigned long long int var_10 = 11488403155741053937ULL;
unsigned int var_11 = 3456012423U;
int var_12 = 1432071795;
unsigned short var_13 = (unsigned short)19623;
unsigned short var_16 = (unsigned short)3185;
int zero = 0;
short var_17 = (short)4434;
signed char var_18 = (signed char)-120;
int var_19 = 1652962259;
unsigned long long int var_20 = 17710672521020756894ULL;
unsigned long long int arr_0 [18] ;
long long int arr_1 [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
short arr_6 [18] ;
unsigned int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 4867918354132622576ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -7497157531708463104LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3022603902723554669ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)20506;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 1056982685U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
