#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_7 = (short)-32037;
short var_8 = (short)29185;
unsigned short var_14 = (unsigned short)47988;
unsigned int var_17 = 1164334709U;
int zero = 0;
unsigned int var_19 = 2533150525U;
unsigned int var_20 = 2906769812U;
long long int var_21 = -6141499624529277592LL;
unsigned long long int var_22 = 14560502046868302973ULL;
unsigned char var_23 = (unsigned char)20;
unsigned char var_24 = (unsigned char)205;
unsigned char var_25 = (unsigned char)172;
short var_26 = (short)3131;
signed char arr_0 [11] ;
unsigned long long int arr_2 [11] ;
unsigned short arr_13 [18] ;
signed char arr_14 [18] ;
unsigned long long int arr_15 [18] ;
long long int arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-77 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6114832350838793347ULL : 9568753980983737567ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned short)12296;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 3790976722520908900ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = -8818138129991685103LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
