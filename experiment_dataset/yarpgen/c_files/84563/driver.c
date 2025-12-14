#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1178;
long long int var_1 = 1771427823621072632LL;
signed char var_3 = (signed char)3;
unsigned short var_5 = (unsigned short)61962;
_Bool var_6 = (_Bool)1;
int var_7 = 548718660;
unsigned int var_8 = 3846455860U;
signed char var_9 = (signed char)-76;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)16185;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 1292365069;
int var_18 = 1503805440;
signed char var_19 = (signed char)36;
unsigned int var_20 = 2773680907U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 15457801694021046208ULL;
_Bool var_23 = (_Bool)0;
int arr_0 [21] ;
signed char arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned short arr_3 [21] [21] ;
long long int arr_4 [21] [21] ;
signed char arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 997541667;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53465 : (unsigned short)8953;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)13356;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 5621195605493858654LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-85;
}

void checksum() {
    hash(&seed, var_16);
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
