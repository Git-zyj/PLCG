#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_5 = 1286108611;
unsigned char var_8 = (unsigned char)55;
int zero = 0;
unsigned long long int var_10 = 10962660280923338597ULL;
int var_11 = -1469094218;
unsigned short var_12 = (unsigned short)3651;
unsigned int var_13 = 3896922150U;
int var_14 = 1625676767;
long long int var_15 = -8122531268549833943LL;
int arr_0 [25] ;
short arr_1 [25] [25] ;
signed char arr_2 [25] ;
unsigned char arr_5 [25] ;
unsigned char arr_3 [25] [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1464382948;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-24111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)8619;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
