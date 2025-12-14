#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13925;
unsigned long long int var_3 = 17782239709188436208ULL;
int var_4 = -794215452;
int var_5 = -486373750;
unsigned long long int var_6 = 9070440803598090800ULL;
_Bool var_8 = (_Bool)1;
long long int var_12 = 374345496268306025LL;
short var_14 = (short)22387;
int zero = 0;
unsigned int var_16 = 2555837124U;
unsigned int var_17 = 2749739765U;
unsigned short arr_3 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)21267;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17325 : (short)30883;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
