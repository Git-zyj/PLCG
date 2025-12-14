#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-55;
long long int var_5 = -5236561325159443658LL;
int zero = 0;
unsigned long long int var_13 = 9726834436246482609ULL;
long long int var_14 = -6292976445823446476LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)50785;
unsigned int var_17 = 3777052494U;
int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1538812006 : 469411568;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
