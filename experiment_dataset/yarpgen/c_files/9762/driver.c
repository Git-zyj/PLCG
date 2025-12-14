#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 369797020;
signed char var_4 = (signed char)-32;
int var_5 = 1961187828;
unsigned char var_8 = (unsigned char)220;
long long int var_9 = -7052142331287611772LL;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
unsigned char var_14 = (unsigned char)16;
unsigned int var_15 = 1351773195U;
long long int var_16 = -194359286443787736LL;
unsigned int var_17 = 2259795637U;
signed char arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_5 [13] ;
unsigned int arr_6 [13] ;
unsigned long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 747239510U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 3050433307U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 835379420U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 8414951565112051022ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
