#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)232;
short var_5 = (short)4997;
unsigned short var_6 = (unsigned short)46425;
int zero = 0;
unsigned short var_12 = (unsigned short)55235;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3541478350U;
unsigned int var_15 = 1826753931U;
unsigned int var_16 = 2503854323U;
unsigned long long int var_17 = 6396819399192708996ULL;
long long int var_18 = 7581912243978983410LL;
_Bool arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_3 [23] ;
unsigned int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)32998;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)41976;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 3166535586U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
