#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)23005;
unsigned char var_13 = (unsigned char)41;
long long int var_14 = -8641143523278928886LL;
signed char var_15 = (signed char)-66;
unsigned long long int var_18 = 15989776849032652005ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)197;
unsigned short var_21 = (unsigned short)47667;
unsigned int var_22 = 1418497444U;
unsigned short var_23 = (unsigned short)40057;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2102502800U;
short var_27 = (short)-16380;
short arr_1 [22] [22] ;
long long int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-8232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -8941787281921062468LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
