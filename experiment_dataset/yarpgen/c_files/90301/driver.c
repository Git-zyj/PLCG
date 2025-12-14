#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
signed char var_1 = (signed char)71;
unsigned long long int var_2 = 16131804085639212983ULL;
unsigned int var_3 = 3919175434U;
unsigned long long int var_4 = 16692499877444336066ULL;
unsigned int var_8 = 2451269554U;
long long int var_9 = -2595124942555263961LL;
long long int var_10 = -8392410859810428724LL;
signed char var_12 = (signed char)-36;
int zero = 0;
short var_15 = (short)24946;
unsigned int var_16 = 2836910166U;
signed char var_17 = (signed char)-8;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2190288801U;
long long int var_20 = 925031826510853646LL;
unsigned long long int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
unsigned int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 6243481009810555121ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 964689620U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3309836819U : 3709394310U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
