#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1441773056;
unsigned char var_1 = (unsigned char)205;
long long int var_2 = 2394631374370958620LL;
int var_4 = -1993149675;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)96;
unsigned char var_13 = (unsigned char)41;
short var_14 = (short)639;
unsigned int var_17 = 3795773698U;
int zero = 0;
unsigned char var_19 = (unsigned char)32;
unsigned char var_20 = (unsigned char)126;
int var_21 = -1848012776;
unsigned char var_22 = (unsigned char)202;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)140;
unsigned int arr_2 [21] ;
long long int arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1502657854U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6632495902344518658LL : 1549931019032775082LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
