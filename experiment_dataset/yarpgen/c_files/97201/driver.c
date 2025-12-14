#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 548325854;
unsigned int var_3 = 2939953556U;
int var_5 = 821706004;
unsigned short var_6 = (unsigned short)53915;
unsigned char var_7 = (unsigned char)49;
unsigned int var_9 = 2093531539U;
int var_11 = -1252745454;
unsigned short var_14 = (unsigned short)120;
int zero = 0;
signed char var_15 = (signed char)-19;
unsigned int var_16 = 3510618243U;
short var_17 = (short)6605;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = 118516305;
signed char arr_0 [19] [19] ;
int arr_1 [19] ;
unsigned short arr_3 [19] [19] ;
signed char arr_4 [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
int arr_11 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 746516213;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)12813;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11263363185544045624ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1392853963 : -155070665;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
