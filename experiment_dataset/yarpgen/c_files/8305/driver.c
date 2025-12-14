#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
int var_1 = -2096241086;
unsigned char var_2 = (unsigned char)53;
unsigned int var_4 = 1617181499U;
int var_5 = 1715234320;
int var_6 = 380058224;
signed char var_7 = (signed char)-74;
int var_8 = -1733531512;
signed char var_9 = (signed char)-71;
signed char var_10 = (signed char)-66;
int zero = 0;
unsigned long long int var_12 = 6193045267407621782ULL;
short var_13 = (short)23326;
unsigned long long int var_14 = 14741537953326883702ULL;
unsigned char var_15 = (unsigned char)171;
unsigned int var_16 = 150906308U;
signed char var_17 = (signed char)42;
signed char arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
short arr_6 [24] [24] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 5798143432691291323ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-20352;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1413050384813410998ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
