#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned short var_1 = (unsigned short)61665;
signed char var_2 = (signed char)-97;
signed char var_4 = (signed char)-67;
unsigned short var_5 = (unsigned short)35690;
unsigned short var_6 = (unsigned short)27918;
unsigned short var_7 = (unsigned short)64990;
unsigned short var_8 = (unsigned short)48061;
unsigned short var_11 = (unsigned short)38164;
unsigned short var_12 = (unsigned short)28711;
unsigned short var_13 = (unsigned short)54298;
signed char var_14 = (signed char)-115;
int zero = 0;
signed char var_15 = (signed char)39;
unsigned long long int var_16 = 929668780388877558ULL;
signed char var_17 = (signed char)-92;
_Bool var_18 = (_Bool)0;
unsigned char arr_0 [24] ;
signed char arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)26080;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
