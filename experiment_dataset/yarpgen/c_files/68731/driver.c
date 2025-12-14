#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21227;
unsigned int var_3 = 542567660U;
unsigned int var_6 = 3519910329U;
int var_7 = -188356915;
long long int var_8 = 8578797223874612192LL;
int zero = 0;
unsigned short var_10 = (unsigned short)36931;
unsigned char var_11 = (unsigned char)26;
unsigned char var_12 = (unsigned char)11;
unsigned int var_13 = 2068664342U;
unsigned int var_14 = 1940192324U;
unsigned long long int var_15 = 17101299872628234876ULL;
unsigned long long int var_16 = 7428463869571168918ULL;
unsigned int var_17 = 3680120846U;
unsigned int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
int arr_2 [13] [13] ;
unsigned char arr_4 [23] ;
unsigned long long int arr_5 [23] ;
unsigned long long int arr_6 [23] [23] ;
int arr_11 [12] ;
unsigned char arr_12 [12] ;
long long int arr_7 [23] [23] ;
int arr_8 [23] ;
unsigned char arr_9 [23] ;
unsigned long long int arr_14 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1858833582U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 840865725U : 377450159U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1592548712 : -1195907914;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 17501938364920590930ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 1596202210091835478ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -1539792931;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -2600275055377871641LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 701965465;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 18058287518151381642ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
