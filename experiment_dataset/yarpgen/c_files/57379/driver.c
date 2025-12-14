#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 162107355U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)6442;
_Bool var_11 = (_Bool)0;
long long int var_14 = -5559400126396767132LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 731341634U;
short var_20 = (short)-27478;
long long int var_21 = -6625883014002483793LL;
unsigned int var_22 = 832945724U;
unsigned char var_23 = (unsigned char)220;
int var_24 = 1226608996;
unsigned short var_25 = (unsigned short)44701;
long long int arr_0 [21] ;
short arr_1 [21] ;
unsigned char arr_2 [21] [21] [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_4 [21] [21] ;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6271314454693569952LL : -7888946600770999138LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-5750;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)2 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)45856;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1791278115U : 3672231427U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-10117 : (short)8345;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
