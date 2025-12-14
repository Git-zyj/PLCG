#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5565;
unsigned char var_3 = (unsigned char)112;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)62629;
signed char var_8 = (signed char)-90;
unsigned char var_10 = (unsigned char)69;
unsigned char var_11 = (unsigned char)122;
unsigned short var_12 = (unsigned short)2468;
unsigned long long int var_13 = 18316283308963675496ULL;
int zero = 0;
signed char var_14 = (signed char)-38;
short var_15 = (short)32592;
signed char var_16 = (signed char)41;
short var_17 = (short)938;
long long int var_18 = 5800514779573390869LL;
short arr_0 [24] ;
int arr_1 [24] [24] ;
int arr_9 [18] [18] ;
long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-11926;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 887071267;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = -1761710535;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 822144430778544319LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
