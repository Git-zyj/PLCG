#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 1167141093834992194LL;
unsigned char var_3 = (unsigned char)12;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 2007315591U;
unsigned long long int var_10 = 16674805171858697921ULL;
unsigned long long int var_14 = 11056163731369213507ULL;
unsigned int var_15 = 3630993853U;
int zero = 0;
unsigned long long int var_17 = 16841857852915371950ULL;
unsigned char var_18 = (unsigned char)53;
unsigned char var_19 = (unsigned char)19;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)152;
unsigned int var_22 = 3051782110U;
long long int var_23 = -4921390048529282123LL;
unsigned long long int var_24 = 3316268078695687637ULL;
unsigned char var_25 = (unsigned char)190;
long long int arr_0 [11] ;
_Bool arr_1 [11] ;
unsigned short arr_3 [11] ;
int arr_4 [11] ;
_Bool arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -4829341804772245001LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)21070;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1240372877 : -1702930293;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
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
