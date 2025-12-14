#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2483743249U;
signed char var_2 = (signed char)-102;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11805810638138740263ULL;
short var_7 = (short)25154;
long long int var_8 = 4540383290326701995LL;
signed char var_9 = (signed char)-38;
unsigned short var_10 = (unsigned short)12;
unsigned int var_11 = 946299171U;
unsigned short var_12 = (unsigned short)13576;
unsigned long long int var_13 = 8729557628303107881ULL;
int zero = 0;
long long int var_14 = -4968802586064326678LL;
signed char var_15 = (signed char)77;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15903074056690991730ULL;
unsigned int var_18 = 1125576662U;
unsigned int var_19 = 2015196091U;
unsigned int var_20 = 244047599U;
unsigned long long int var_21 = 11421324558393823064ULL;
long long int var_22 = 7067779212692140601LL;
unsigned short arr_18 [23] [23] ;
_Bool arr_23 [23] [23] [23] ;
int arr_24 [23] [23] [23] ;
long long int arr_25 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)4188;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -594902840;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = -1360752475634732265LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
