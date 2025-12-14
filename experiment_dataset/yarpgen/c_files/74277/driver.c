#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22297;
short var_1 = (short)12573;
unsigned char var_4 = (unsigned char)133;
unsigned int var_5 = 482298226U;
short var_8 = (short)-18123;
unsigned long long int var_9 = 11286753388888389548ULL;
_Bool var_10 = (_Bool)0;
int var_11 = 830177947;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)23157;
short var_14 = (short)-28359;
unsigned char var_15 = (unsigned char)75;
unsigned long long int var_16 = 9293214298196689292ULL;
unsigned long long int arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
int arr_7 [25] ;
unsigned char arr_11 [25] ;
short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 13493748706790318910ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16706 : (unsigned short)44182;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -2011848666;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-8650 : (short)13504;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
