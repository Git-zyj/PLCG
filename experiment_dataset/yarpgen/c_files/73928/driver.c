#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2609500962U;
unsigned int var_1 = 3341562205U;
unsigned int var_2 = 3154377360U;
unsigned int var_4 = 1535588109U;
unsigned int var_5 = 3730715524U;
unsigned int var_8 = 994314893U;
unsigned int var_10 = 3501767431U;
unsigned int var_12 = 625545099U;
unsigned int var_13 = 3565844239U;
unsigned int var_15 = 2923240501U;
int zero = 0;
unsigned int var_16 = 1278779988U;
unsigned int var_17 = 3198119470U;
unsigned int var_18 = 2157928834U;
unsigned int var_19 = 2763689620U;
unsigned int var_20 = 4103735339U;
unsigned int var_21 = 3817078746U;
unsigned int var_22 = 836423218U;
unsigned int var_23 = 3432167412U;
unsigned int arr_0 [13] ;
unsigned int arr_6 [14] ;
unsigned int arr_7 [14] ;
unsigned int arr_11 [14] [14] [14] ;
unsigned int arr_12 [14] [14] [14] ;
unsigned int arr_4 [13] [13] ;
unsigned int arr_5 [13] ;
unsigned int arr_13 [14] ;
unsigned int arr_16 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 710556396U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 2605003688U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1722328928U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3243703254U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 536254234U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 425370176U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 89747265U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 3333888920U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = 1782271212U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
