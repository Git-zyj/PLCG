#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14682;
unsigned int var_5 = 2584515899U;
signed char var_9 = (signed char)5;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)26710;
unsigned int var_12 = 3188904741U;
int zero = 0;
signed char var_13 = (signed char)-81;
long long int var_14 = -1741869045360753391LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int var_17 = 401260109;
int var_18 = -169396024;
_Bool var_19 = (_Bool)0;
int arr_2 [18] ;
_Bool arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1613886031;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
