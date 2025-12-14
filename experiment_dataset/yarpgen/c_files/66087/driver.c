#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1054098956U;
unsigned int var_1 = 123702166U;
short var_2 = (short)-4527;
unsigned long long int var_4 = 14643294726850022545ULL;
short var_7 = (short)23483;
short var_10 = (short)-2713;
unsigned int var_13 = 969343947U;
signed char var_15 = (signed char)29;
unsigned int var_16 = 1737512708U;
int zero = 0;
long long int var_17 = 7237393347052486595LL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-16430;
unsigned int var_20 = 4125733530U;
long long int var_21 = 2762081284557760857LL;
long long int var_22 = -5921853770460157207LL;
long long int var_23 = 9146204888261612645LL;
unsigned long long int var_24 = 17287727687218052884ULL;
unsigned int arr_2 [18] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2089077254U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -6202156852282470433LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
