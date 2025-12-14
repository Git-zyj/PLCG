#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
signed char var_2 = (signed char)40;
unsigned long long int var_8 = 12804055535003444302ULL;
long long int var_10 = 2845334854856272872LL;
unsigned int var_14 = 2947034718U;
int zero = 0;
unsigned long long int var_17 = 12835954360532940296ULL;
long long int var_18 = 7541982640457089381LL;
long long int var_19 = -2733520049243377021LL;
long long int var_20 = -3664515098131130979LL;
unsigned int var_21 = 2421767880U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 4295920359767589193ULL;
signed char var_24 = (signed char)2;
_Bool arr_0 [15] ;
int arr_1 [15] ;
unsigned char arr_3 [18] ;
unsigned int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1394249253;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 148733660U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
