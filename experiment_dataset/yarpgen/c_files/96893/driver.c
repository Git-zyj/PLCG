#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_8 = (unsigned short)31698;
unsigned char var_9 = (unsigned char)163;
short var_10 = (short)-29623;
int var_11 = -2035727927;
short var_14 = (short)-24766;
signed char var_15 = (signed char)80;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1968222400U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2166779094U;
long long int var_22 = 4849585031872109525LL;
short var_23 = (short)-6404;
int arr_0 [13] ;
unsigned short arr_1 [13] ;
int arr_2 [13] ;
int arr_6 [14] ;
signed char arr_7 [14] [14] ;
unsigned int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -644526025;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)53204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1505626247;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -1066637891;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1675949469U : 2918223040U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
