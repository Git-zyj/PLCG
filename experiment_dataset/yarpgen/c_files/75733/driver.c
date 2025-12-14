#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17365718517610477861ULL;
short var_2 = (short)5691;
unsigned char var_3 = (unsigned char)166;
unsigned long long int var_4 = 2602827637898804865ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)64111;
unsigned long long int var_8 = 3604118445648463269ULL;
short var_9 = (short)-27827;
unsigned char var_10 = (unsigned char)168;
int zero = 0;
short var_11 = (short)-31750;
long long int var_12 = 4309274362499752738LL;
signed char var_13 = (signed char)-79;
long long int var_14 = 708326012775359220LL;
short var_15 = (short)-21648;
signed char var_16 = (signed char)-111;
unsigned int var_17 = 2113002075U;
signed char var_18 = (signed char)54;
_Bool var_19 = (_Bool)0;
short var_20 = (short)13336;
signed char arr_1 [23] ;
signed char arr_5 [23] ;
unsigned long long int arr_6 [23] ;
unsigned short arr_9 [23] [23] ;
signed char arr_11 [23] [23] ;
short arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 18046989612633409406ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36852 : (unsigned short)51656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-122 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)1871 : (short)5451;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
