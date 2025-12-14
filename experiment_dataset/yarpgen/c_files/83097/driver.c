#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18472;
long long int var_1 = 6851865050513024441LL;
int var_5 = 1536967490;
int var_7 = 1410638376;
int var_10 = 1849330667;
signed char var_11 = (signed char)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_19 = 7408163031155357311ULL;
int zero = 0;
short var_20 = (short)17203;
long long int var_21 = -6444096624870509926LL;
unsigned int var_22 = 304504311U;
short var_23 = (short)17768;
int var_24 = 202670201;
long long int var_25 = 3820338768873106867LL;
signed char arr_3 [24] ;
short arr_10 [22] ;
unsigned char arr_24 [22] [22] [22] [22] ;
signed char arr_8 [24] ;
short arr_12 [22] [22] ;
short arr_13 [22] [22] ;
long long int arr_16 [19] ;
long long int arr_17 [19] [19] ;
short arr_18 [19] ;
int arr_27 [22] ;
unsigned short arr_28 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-12 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-18053;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)-27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)21830 : (short)29215;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)10994 : (short)24060;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 2798480696219103540LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = -8297011047612501354LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (short)-18002;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 1296083386 : 1782588862;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (unsigned short)11822;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
