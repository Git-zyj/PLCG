#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21847;
unsigned long long int var_6 = 6824067001464967232ULL;
long long int var_7 = -1464574039484857992LL;
long long int var_10 = -1518267669267343146LL;
short var_11 = (short)-5450;
long long int var_12 = -8399123977272518463LL;
int var_13 = -920836398;
unsigned long long int var_16 = 5988065078900313969ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)113;
short var_18 = (short)28526;
short var_19 = (short)24025;
unsigned int var_20 = 3398292991U;
unsigned int var_21 = 2486354259U;
_Bool var_22 = (_Bool)0;
_Bool arr_0 [23] ;
unsigned int arr_3 [23] ;
int arr_4 [23] ;
unsigned int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2324147268U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -585694493;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1828741759U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
