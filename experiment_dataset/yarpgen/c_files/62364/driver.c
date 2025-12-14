#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9005;
signed char var_2 = (signed char)-1;
int var_3 = 1286326786;
signed char var_5 = (signed char)-9;
unsigned int var_6 = 1239207941U;
signed char var_8 = (signed char)61;
int zero = 0;
int var_11 = -1351612795;
unsigned char var_12 = (unsigned char)199;
unsigned long long int var_13 = 13641927379441785352ULL;
unsigned short var_14 = (unsigned short)48021;
unsigned int arr_0 [11] [11] ;
unsigned int arr_1 [11] [11] ;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 3562807241U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 2086464072U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
