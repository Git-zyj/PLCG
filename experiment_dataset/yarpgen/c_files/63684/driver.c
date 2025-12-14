#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2366682984U;
unsigned int var_1 = 3199618639U;
unsigned int var_7 = 2234880298U;
unsigned int var_8 = 3321323321U;
unsigned int var_11 = 824831099U;
unsigned int var_14 = 2578072638U;
unsigned int var_15 = 517574796U;
unsigned int var_16 = 2272480177U;
int zero = 0;
unsigned int var_19 = 297335740U;
unsigned int var_20 = 341218062U;
unsigned int var_21 = 165878241U;
unsigned int var_22 = 118213050U;
unsigned int var_23 = 2910950749U;
unsigned int var_24 = 1348297855U;
unsigned int var_25 = 1376311760U;
unsigned int var_26 = 2673075751U;
unsigned int var_27 = 2048018453U;
unsigned int var_28 = 2095322364U;
unsigned int arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
unsigned int arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] [14] ;
unsigned int arr_12 [17] ;
unsigned int arr_13 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1823419556U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 533189395U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3912237033U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 547398957U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2552714376U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2932890113U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 3729595724U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 830953270U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
