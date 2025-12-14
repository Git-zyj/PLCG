#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)124;
unsigned int var_6 = 720395478U;
long long int var_7 = -5606746664587757253LL;
unsigned short var_8 = (unsigned short)43519;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)6998;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4022108885029394026LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)29900;
long long int var_15 = -598554592762450509LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool arr_0 [23] [23] ;
unsigned long long int arr_2 [23] ;
short arr_11 [22] ;
unsigned short arr_14 [22] ;
signed char arr_3 [23] ;
short arr_15 [22] [22] [22] [22] ;
unsigned char arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 13187489901456747910ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)-22575;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)11484;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)8581 : (short)-24612;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)216;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
