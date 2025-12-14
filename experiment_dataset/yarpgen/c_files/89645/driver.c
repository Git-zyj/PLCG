#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 517343298195182717ULL;
long long int var_2 = 2301468085403121959LL;
int var_4 = 299484266;
unsigned char var_6 = (unsigned char)41;
int var_7 = -1903680338;
unsigned short var_10 = (unsigned short)26117;
signed char var_11 = (signed char)27;
unsigned long long int var_14 = 3332620555700519821ULL;
int zero = 0;
long long int var_15 = -6416978163823097164LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)173;
unsigned int var_18 = 137632717U;
unsigned int var_19 = 3840596664U;
signed char var_20 = (signed char)-98;
long long int var_21 = -3444000344277226798LL;
int var_22 = -766137267;
unsigned char arr_4 [19] [19] [19] ;
short arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)8023;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
