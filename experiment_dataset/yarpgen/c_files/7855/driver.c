#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned char var_1 = (unsigned char)192;
unsigned short var_2 = (unsigned short)48014;
_Bool var_7 = (_Bool)1;
long long int var_11 = 4005575912853273672LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)47050;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 728350942U;
unsigned char var_20 = (unsigned char)97;
unsigned char var_21 = (unsigned char)196;
unsigned short var_22 = (unsigned short)47172;
unsigned short arr_2 [19] ;
unsigned char arr_4 [17] ;
unsigned short arr_3 [19] ;
short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)1905;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)15379;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-1554;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
