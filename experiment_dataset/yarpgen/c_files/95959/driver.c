#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2733226446U;
unsigned long long int var_1 = 4488201862587014588ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)27170;
unsigned short var_7 = (unsigned short)7234;
unsigned long long int var_8 = 8137822866851027096ULL;
short var_10 = (short)12915;
unsigned int var_11 = 2722635083U;
unsigned int var_14 = 2538424895U;
unsigned char var_18 = (unsigned char)24;
int zero = 0;
short var_19 = (short)-14596;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3332852857U;
short var_22 = (short)-17490;
unsigned short var_23 = (unsigned short)48053;
unsigned long long int var_24 = 15977525490431505489ULL;
unsigned int arr_2 [18] ;
unsigned int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1960089782U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 125604833U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
