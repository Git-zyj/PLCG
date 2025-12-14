#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28054;
unsigned long long int var_1 = 4729219024917425212ULL;
unsigned long long int var_5 = 1152880795361939755ULL;
long long int var_6 = -7789543477694691022LL;
unsigned int var_7 = 3930455433U;
unsigned short var_9 = (unsigned short)15351;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)9107;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)25432;
short var_15 = (short)19917;
unsigned long long int var_16 = 13957429474598130381ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 653558887324971380ULL;
unsigned char var_19 = (unsigned char)73;
unsigned int var_20 = 2583399185U;
unsigned char var_21 = (unsigned char)239;
long long int var_22 = -8785658404226404184LL;
unsigned int var_23 = 18522539U;
short var_24 = (short)-10799;
unsigned int var_25 = 3896124290U;
unsigned int var_26 = 2872551784U;
unsigned long long int arr_0 [22] ;
short arr_1 [22] [22] ;
short arr_2 [18] [18] ;
_Bool arr_3 [18] ;
unsigned int arr_4 [18] [18] ;
unsigned int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12123141877750834800ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21821;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-14312;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2629293585U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3671749087U : 1128862297U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
