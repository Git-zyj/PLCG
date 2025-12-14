#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
unsigned long long int var_7 = 4435612700548203452ULL;
unsigned int var_10 = 3820560298U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)863;
unsigned int var_14 = 3875820160U;
unsigned long long int var_15 = 1742275747671600864ULL;
long long int var_16 = -7100758005081379862LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3811479311655251619ULL;
unsigned char var_19 = (unsigned char)8;
unsigned long long int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 11684150925494491766ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-27922;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4681882489503151996ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 310608144U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
