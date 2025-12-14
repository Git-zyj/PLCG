#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52087;
unsigned short var_5 = (unsigned short)6389;
unsigned long long int var_7 = 18297964390781550270ULL;
unsigned int var_10 = 622102936U;
long long int var_11 = -8912629008355839072LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 14261421796290647706ULL;
unsigned short var_20 = (unsigned short)59647;
unsigned short var_21 = (unsigned short)46736;
_Bool var_22 = (_Bool)1;
long long int var_23 = 2014911755993537091LL;
unsigned short var_24 = (unsigned short)30186;
unsigned char var_25 = (unsigned char)186;
int var_26 = 1141368796;
unsigned int var_27 = 876957929U;
unsigned short arr_0 [20] ;
unsigned long long int arr_6 [15] ;
unsigned short arr_9 [15] [15] ;
unsigned long long int arr_2 [20] ;
unsigned int arr_17 [15] [15] [15] ;
unsigned char arr_20 [15] ;
int arr_21 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)35395;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 13838309574952699656ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)51731;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 8710466012023193305ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2151333672U : 1032478999U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = 1723326064;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
