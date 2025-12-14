#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 86566559U;
unsigned char var_5 = (unsigned char)86;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
signed char var_14 = (signed char)1;
unsigned char var_15 = (unsigned char)147;
signed char var_16 = (signed char)110;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3311324189U : 4133695332U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
