#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
long long int var_1 = 5696986918129870289LL;
int var_2 = 367945222;
unsigned char var_4 = (unsigned char)211;
unsigned int var_5 = 3564697852U;
signed char var_6 = (signed char)1;
long long int var_7 = 1322385798929957499LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3730658318U;
unsigned int var_10 = 2678630141U;
unsigned long long int var_11 = 11741944591695101746ULL;
unsigned int var_12 = 326608534U;
unsigned char var_14 = (unsigned char)174;
int zero = 0;
signed char var_15 = (signed char)51;
unsigned int var_16 = 1199053239U;
signed char var_17 = (signed char)-105;
int var_18 = 515958259;
unsigned int var_19 = 3631130139U;
unsigned int var_20 = 1347145669U;
unsigned int var_21 = 1128195778U;
signed char var_22 = (signed char)34;
unsigned int var_23 = 2652943567U;
int arr_0 [19] ;
int arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned char arr_4 [12] [12] ;
int arr_3 [19] ;
unsigned long long int arr_6 [12] ;
long long int arr_7 [12] ;
long long int arr_8 [12] ;
signed char arr_11 [12] ;
long long int arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1168643585;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1571702950;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1340105263;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 8149140282365774342ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3144466468237904872LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1623164852016861940LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -7553949282790013503LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
