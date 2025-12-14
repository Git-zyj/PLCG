#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30505;
_Bool var_3 = (_Bool)0;
int var_4 = -496611755;
int var_7 = 621913473;
unsigned short var_8 = (unsigned short)878;
unsigned long long int var_9 = 13408918621473491441ULL;
int var_11 = -66556884;
unsigned int var_13 = 1725382623U;
unsigned char var_15 = (unsigned char)174;
long long int var_16 = 6706400934513515839LL;
unsigned char var_18 = (unsigned char)178;
int zero = 0;
unsigned long long int var_20 = 11682175627894603260ULL;
unsigned long long int var_21 = 2473732553206857865ULL;
int var_22 = -1547098262;
long long int var_23 = -3723991310926640369LL;
unsigned char var_24 = (unsigned char)190;
_Bool var_25 = (_Bool)0;
long long int arr_0 [14] [14] ;
signed char arr_1 [14] ;
long long int arr_3 [14] [14] ;
long long int arr_4 [14] ;
unsigned short arr_6 [14] [14] [14] [14] ;
unsigned short arr_7 [12] ;
long long int arr_8 [12] ;
_Bool arr_9 [12] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1242256759945628611LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2879118777349689943LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 4355871648499361734LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10743;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)37852;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = -5500614202694166205LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
