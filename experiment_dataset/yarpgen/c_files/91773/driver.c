#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5100;
unsigned short var_3 = (unsigned short)17546;
unsigned short var_5 = (unsigned short)42124;
unsigned char var_8 = (unsigned char)34;
unsigned short var_9 = (unsigned short)52725;
int zero = 0;
unsigned short var_10 = (unsigned short)19536;
short var_11 = (short)-12746;
signed char var_12 = (signed char)60;
unsigned long long int var_13 = 16243755425921994815ULL;
int var_14 = -703319848;
int var_15 = 56270931;
short var_16 = (short)14709;
int var_17 = 939413489;
unsigned int arr_0 [25] ;
long long int arr_1 [25] ;
short arr_6 [11] ;
int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2173341281U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 5449930350564933895LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)29308;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 1809298563;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
