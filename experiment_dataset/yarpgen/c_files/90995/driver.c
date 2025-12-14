#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2331032875U;
unsigned int var_1 = 2110221340U;
unsigned int var_2 = 580223275U;
unsigned int var_3 = 1958525788U;
unsigned long long int var_5 = 14378996088590224234ULL;
long long int var_6 = 1574025521034610564LL;
long long int var_7 = -5237892822360125456LL;
unsigned int var_9 = 2497475892U;
signed char var_10 = (signed char)-15;
long long int var_13 = -9163270370463786127LL;
signed char var_14 = (signed char)121;
unsigned int var_15 = 2774120461U;
int zero = 0;
unsigned short var_16 = (unsigned short)51412;
int var_17 = -1188971718;
unsigned char var_18 = (unsigned char)130;
unsigned char var_19 = (unsigned char)151;
signed char var_20 = (signed char)-91;
unsigned char arr_1 [10] ;
short arr_5 [10] ;
unsigned int arr_6 [10] ;
unsigned char arr_7 [10] [10] ;
long long int arr_8 [10] [10] [10] ;
unsigned int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-7588;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3564123816U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -8848037077505275068LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2541565060U : 3977908577U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
