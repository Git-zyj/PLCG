#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1649428734876039128ULL;
signed char var_6 = (signed char)-67;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_14 = 323197580U;
unsigned short var_15 = (unsigned short)34167;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-26;
int zero = 0;
unsigned char var_19 = (unsigned char)23;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 194383715U;
signed char var_22 = (signed char)-99;
long long int var_23 = 7982713339505087136LL;
signed char var_24 = (signed char)96;
unsigned char arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)235;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
