#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6306077283180085218LL;
unsigned int var_1 = 1442141608U;
signed char var_2 = (signed char)72;
unsigned short var_6 = (unsigned short)54835;
unsigned char var_7 = (unsigned char)214;
long long int var_12 = 6722711344306979518LL;
int zero = 0;
long long int var_14 = 2013256548793805287LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-21929;
short arr_0 [17] ;
unsigned char arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
_Bool arr_4 [17] [17] ;
unsigned char arr_6 [17] [17] ;
unsigned char arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-29424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)80;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
