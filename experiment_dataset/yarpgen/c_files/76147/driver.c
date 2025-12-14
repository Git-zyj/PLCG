#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13342;
_Bool var_6 = (_Bool)1;
int var_7 = 617365638;
unsigned int var_9 = 1980714402U;
int var_11 = 177296237;
int zero = 0;
signed char var_12 = (signed char)82;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2905773650U;
unsigned long long int var_15 = 9863162370353289358ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12387418459308732290ULL;
int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -624924855 : 349848597;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5966098331854990516ULL : 7855921062825786493ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35277 : (unsigned short)56857;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
