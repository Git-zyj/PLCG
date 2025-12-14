#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 866883198U;
unsigned int var_6 = 4141791920U;
unsigned int var_9 = 889653505U;
int var_14 = 1523596784;
int zero = 0;
signed char var_17 = (signed char)-105;
unsigned int var_18 = 64665468U;
unsigned int var_19 = 375955266U;
long long int arr_0 [12] [12] ;
signed char arr_3 [15] [15] ;
unsigned int arr_4 [15] ;
long long int arr_2 [12] ;
int arr_7 [15] ;
long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 5516662210721304389LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 3571358827U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1317406077233357490LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1111138852;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 4994753133796759017LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
