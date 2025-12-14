#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13930450456405562114ULL;
signed char var_2 = (signed char)53;
_Bool var_3 = (_Bool)0;
long long int var_4 = -5652051300320507632LL;
unsigned int var_5 = 45897342U;
short var_7 = (short)-7346;
long long int var_10 = 2046290715354332655LL;
unsigned int var_11 = 2090817467U;
int zero = 0;
short var_12 = (short)-7939;
int var_13 = 919402055;
unsigned char var_14 = (unsigned char)213;
unsigned int var_15 = 547072969U;
unsigned int var_16 = 4039582853U;
signed char arr_0 [24] [24] ;
int arr_1 [24] ;
long long int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 570455051;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5936521892365586611LL : -6240293884900304364LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4676712156824911657ULL : 15020212319997435118ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
