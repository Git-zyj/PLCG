#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6167009377222582610LL;
unsigned int var_3 = 2980801525U;
long long int var_7 = 2673710571002365921LL;
unsigned int var_9 = 3115816295U;
long long int var_10 = 72560457758052654LL;
unsigned long long int var_11 = 17787975812901203790ULL;
long long int var_14 = 1192098317158617709LL;
unsigned int var_15 = 2824822620U;
unsigned char var_16 = (unsigned char)48;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)170;
unsigned short var_19 = (unsigned short)6459;
unsigned int var_20 = 3374794620U;
unsigned int var_21 = 379715252U;
int var_22 = 321749;
short var_23 = (short)23288;
unsigned long long int var_24 = 17821921246506030657ULL;
_Bool var_25 = (_Bool)0;
int var_26 = -1696016000;
short arr_4 [14] ;
_Bool arr_5 [14] ;
unsigned long long int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-15074;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 3131502481290536936ULL : 2218944074002752107ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
