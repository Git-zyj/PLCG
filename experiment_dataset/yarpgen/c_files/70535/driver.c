#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1431016057U;
int var_11 = 1333325219;
unsigned long long int var_12 = 14172948469413281096ULL;
int zero = 0;
long long int var_13 = 2712582682480392157LL;
int var_14 = -866562198;
signed char var_15 = (signed char)64;
long long int var_16 = 5441688993188356487LL;
short var_17 = (short)-22681;
long long int var_18 = -8303560315457053169LL;
unsigned int arr_0 [17] ;
unsigned long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2341043652U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 17709647273383844517ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
