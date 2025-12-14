#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
unsigned int var_1 = 705040301U;
unsigned char var_2 = (unsigned char)199;
signed char var_3 = (signed char)-85;
long long int var_5 = 8801202696876797963LL;
short var_7 = (short)2018;
unsigned char var_8 = (unsigned char)113;
unsigned int var_12 = 25610032U;
unsigned char var_14 = (unsigned char)217;
unsigned char var_15 = (unsigned char)46;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)143;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1000106102U;
signed char var_21 = (signed char)87;
_Bool arr_0 [15] [15] ;
_Bool arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
