#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1039548070174691942LL;
unsigned short var_6 = (unsigned short)25978;
long long int var_7 = 8978906925974241843LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 16772169210980658567ULL;
unsigned char var_13 = (unsigned char)13;
unsigned long long int var_14 = 12987509583036474926ULL;
int zero = 0;
int var_15 = 1215928985;
unsigned short var_16 = (unsigned short)60627;
unsigned int var_17 = 1001733090U;
signed char var_18 = (signed char)59;
unsigned long long int var_19 = 5887823494692113407ULL;
int var_20 = 1829161873;
unsigned int var_21 = 3401347901U;
unsigned long long int var_22 = 1061120617549054762ULL;
signed char var_23 = (signed char)58;
unsigned short var_24 = (unsigned short)59505;
short arr_6 [18] [18] ;
long long int arr_7 [25] ;
unsigned int arr_8 [25] ;
unsigned int arr_10 [25] ;
unsigned int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-17430 : (short)28758;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -4875141823680529616LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 3847716145U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 2595135486U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 1444669748U;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
