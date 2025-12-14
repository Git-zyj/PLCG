#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -952059939;
long long int var_2 = 1964696804065189492LL;
int var_3 = 124406083;
short var_4 = (short)-6597;
short var_6 = (short)12745;
unsigned char var_7 = (unsigned char)203;
int var_10 = 566026329;
int zero = 0;
unsigned long long int var_11 = 10528176164135474603ULL;
unsigned short var_12 = (unsigned short)34563;
int var_13 = 265527430;
int var_14 = 157451784;
long long int var_15 = -2065505710292654269LL;
unsigned char var_16 = (unsigned char)167;
int var_17 = -1809654963;
signed char arr_0 [18] ;
short arr_5 [19] ;
unsigned long long int arr_6 [19] ;
int arr_3 [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-27511;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 12333854122367973912ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 570676066;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4784322797306187447ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
