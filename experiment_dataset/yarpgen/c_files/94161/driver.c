#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1240225191;
unsigned char var_2 = (unsigned char)40;
unsigned int var_3 = 1669495142U;
signed char var_4 = (signed char)114;
short var_6 = (short)11068;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)53096;
int var_10 = 1849939540;
int zero = 0;
unsigned int var_11 = 2662564267U;
long long int var_12 = 9075802831541549402LL;
long long int var_13 = 2959092241523389671LL;
unsigned long long int var_14 = 2388442827169639147ULL;
short var_15 = (short)-9881;
unsigned char var_16 = (unsigned char)103;
unsigned long long int var_17 = 2744501250689012077ULL;
int var_18 = -233086688;
unsigned int var_19 = 3103262021U;
unsigned char arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
int arr_3 [13] ;
unsigned short arr_2 [13] ;
int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 15418488570563565472ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -569582605;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)4895;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 7256614;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
