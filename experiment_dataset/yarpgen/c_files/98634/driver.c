#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 8337277U;
unsigned int var_1 = 103804481U;
unsigned int var_2 = 3392383244U;
unsigned int var_3 = 2980878574U;
unsigned int var_4 = 1441402436U;
unsigned int var_5 = 3740060207U;
unsigned int var_6 = 2998372571U;
unsigned int var_7 = 435687085U;
unsigned int var_9 = 3753834737U;
unsigned int var_10 = 2443902403U;
unsigned int var_11 = 3654551793U;
unsigned int var_14 = 1347523906U;
unsigned int var_15 = 2718761159U;
int zero = 0;
unsigned int var_17 = 1651381808U;
unsigned int var_18 = 1583217405U;
unsigned int var_19 = 343759770U;
unsigned int var_20 = 1434433425U;
unsigned int var_21 = 2379574674U;
unsigned int var_22 = 4203467586U;
unsigned int var_23 = 3119329889U;
unsigned int var_24 = 2376655885U;
unsigned int arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] ;
unsigned int arr_3 [15] [15] ;
unsigned int arr_4 [15] [15] ;
unsigned int arr_5 [15] [15] [15] [15] ;
unsigned int arr_8 [15] [15] ;
unsigned int arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2176888334U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3640518807U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 326230792U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 73716136U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2273337977U : 287920346U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2998255950U : 1114684463U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 307746535U : 2157463804U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 2366855168U : 3367360253U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
