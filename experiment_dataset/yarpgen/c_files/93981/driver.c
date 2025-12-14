#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1725598839;
unsigned int var_1 = 2687184063U;
signed char var_2 = (signed char)79;
signed char var_10 = (signed char)-70;
int zero = 0;
unsigned char var_11 = (unsigned char)0;
int var_12 = 1749138254;
unsigned long long int var_13 = 1831788071116876411ULL;
_Bool var_14 = (_Bool)1;
int var_15 = -1543735654;
short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-22045 : (short)28215;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
