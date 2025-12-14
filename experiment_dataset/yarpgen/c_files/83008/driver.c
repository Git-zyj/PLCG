#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29070;
signed char var_2 = (signed char)10;
signed char var_6 = (signed char)-85;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-5545;
int var_11 = -264608439;
int zero = 0;
signed char var_13 = (signed char)98;
short var_14 = (short)13870;
int var_15 = 440678863;
_Bool var_16 = (_Bool)0;
short var_17 = (short)14014;
unsigned short arr_0 [15] ;
unsigned short arr_1 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)58581;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)14211;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
