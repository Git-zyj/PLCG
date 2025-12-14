#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 505739231U;
signed char var_2 = (signed char)8;
signed char var_3 = (signed char)69;
unsigned long long int var_4 = 5638351590656660057ULL;
int var_6 = 1568311127;
long long int var_7 = 1937474724224521306LL;
unsigned char var_8 = (unsigned char)251;
unsigned long long int var_11 = 7543532412660389267ULL;
unsigned char var_13 = (unsigned char)252;
unsigned short var_15 = (unsigned short)27510;
int zero = 0;
int var_17 = 839968969;
unsigned int var_18 = 3424709951U;
signed char var_19 = (signed char)89;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)227;
signed char var_23 = (signed char)117;
int var_24 = -1965924369;
unsigned int arr_9 [11] ;
_Bool arr_14 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 715616825U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
