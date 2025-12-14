#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned short var_5 = (unsigned short)33089;
int var_6 = 1252336904;
int var_8 = -472009785;
unsigned int var_9 = 206401074U;
int zero = 0;
unsigned char var_12 = (unsigned char)90;
unsigned short var_13 = (unsigned short)49143;
unsigned long long int var_14 = 17718926587096250333ULL;
signed char var_15 = (signed char)-64;
unsigned long long int var_16 = 15549824573297187523ULL;
unsigned long long int arr_3 [23] ;
unsigned char arr_4 [23] ;
int arr_5 [23] ;
unsigned int arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 15940080666530356072ULL : 7441615442562822292ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)218 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1944219240 : -1116553468;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 2971938006U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
