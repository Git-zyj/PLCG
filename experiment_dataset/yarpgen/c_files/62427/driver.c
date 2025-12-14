#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6231603400289636178ULL;
short var_1 = (short)9627;
long long int var_5 = 645690471789090789LL;
long long int var_6 = -6486636597738100803LL;
signed char var_7 = (signed char)43;
unsigned int var_8 = 3684288017U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2781880409584843606ULL;
unsigned int var_14 = 4084843950U;
unsigned long long int var_15 = 17101245037969986746ULL;
int zero = 0;
unsigned int var_16 = 1382413284U;
unsigned int var_17 = 1589554411U;
short var_18 = (short)-8120;
signed char var_19 = (signed char)39;
signed char var_20 = (signed char)87;
short arr_2 [12] [12] ;
unsigned long long int arr_10 [12] [12] [12] [12] ;
short arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-31646;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 11046813400296078013ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)18462;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
