#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1195191801;
unsigned int var_2 = 2177739014U;
_Bool var_5 = (_Bool)0;
int var_6 = -265594989;
signed char var_7 = (signed char)48;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)4;
unsigned int var_12 = 3989576159U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)167;
int zero = 0;
signed char var_15 = (signed char)-26;
unsigned short var_16 = (unsigned short)42276;
unsigned int var_17 = 1598722795U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 323868150U;
unsigned int var_20 = 3751807148U;
unsigned int var_21 = 3358919208U;
_Bool arr_0 [22] ;
int arr_1 [22] ;
short arr_4 [22] [22] ;
unsigned int arr_2 [22] [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1170404023;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-7040;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 195529801U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 2125035925U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
