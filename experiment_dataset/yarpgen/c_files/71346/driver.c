#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3551147851U;
signed char var_4 = (signed char)77;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)20;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3945901811U;
unsigned int var_20 = 1580787970U;
unsigned char var_21 = (unsigned char)31;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-105;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)16;
unsigned int var_26 = 3055124839U;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 2517420920U;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 1409936738U;
signed char var_31 = (signed char)-105;
_Bool arr_4 [20] ;
unsigned int arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = 1638178874U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
