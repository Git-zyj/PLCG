#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2789052258U;
signed char var_1 = (signed char)-3;
unsigned long long int var_4 = 14108547490612320375ULL;
int var_5 = 1292814170;
unsigned short var_7 = (unsigned short)16996;
unsigned int var_9 = 1655856200U;
int zero = 0;
short var_10 = (short)-13216;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)44179;
int var_13 = 1190601508;
unsigned long long int var_14 = 8105887444429032790ULL;
int var_15 = 985553922;
unsigned long long int var_16 = 3462471971731194822ULL;
short var_17 = (short)-32689;
short arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
long long int arr_3 [24] ;
unsigned short arr_4 [24] ;
unsigned short arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)12982;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2526005829U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3097089291803341093LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)26666;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)60327;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
