#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1443125304;
signed char var_4 = (signed char)-16;
unsigned char var_7 = (unsigned char)14;
short var_14 = (short)-2351;
int zero = 0;
int var_17 = 788987294;
unsigned char var_18 = (unsigned char)251;
unsigned char var_19 = (unsigned char)206;
signed char var_20 = (signed char)-80;
short var_21 = (short)-18931;
unsigned short var_22 = (unsigned short)38606;
unsigned int arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned int arr_2 [14] [14] ;
short arr_3 [18] ;
unsigned short arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2375645445U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3321420593U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)8420;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)14182;
}

void checksum() {
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
