#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1002169261592015462ULL;
unsigned long long int var_4 = 7928035534025414389ULL;
short var_5 = (short)-13330;
unsigned int var_6 = 1282863132U;
unsigned char var_7 = (unsigned char)13;
int zero = 0;
short var_11 = (short)11030;
unsigned char var_12 = (unsigned char)37;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)3325;
short var_15 = (short)-22027;
unsigned long long int var_16 = 701292331717375087ULL;
unsigned int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned short arr_5 [11] [11] ;
unsigned long long int arr_3 [25] [25] ;
unsigned short arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3540371968U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 14078172484603181314ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57794 : (unsigned short)49244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3377390646076468097ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57797 : (unsigned short)13032;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
