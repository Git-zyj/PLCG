#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17781498291226888120ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)38426;
unsigned char var_6 = (unsigned char)76;
unsigned char var_7 = (unsigned char)213;
unsigned int var_9 = 1200391483U;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)2;
short var_13 = (short)-10151;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)79;
unsigned char var_16 = (unsigned char)109;
long long int var_17 = -324507538466410884LL;
unsigned long long int var_18 = 13414372419882691317ULL;
signed char var_19 = (signed char)13;
short var_20 = (short)-31081;
signed char arr_0 [21] ;
unsigned char arr_1 [21] ;
unsigned int arr_2 [21] ;
_Bool arr_3 [21] ;
unsigned int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3881276082U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1701877797U : 1846666276U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
