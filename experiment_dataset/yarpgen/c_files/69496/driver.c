#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
signed char var_3 = (signed char)78;
long long int var_4 = -8040254415266068817LL;
signed char var_5 = (signed char)87;
unsigned short var_6 = (unsigned short)38292;
short var_9 = (short)28258;
unsigned char var_14 = (unsigned char)205;
int zero = 0;
unsigned long long int var_15 = 3774331273663594044ULL;
int var_16 = 913222491;
signed char var_17 = (signed char)-19;
unsigned long long int var_18 = 1841393009759318599ULL;
unsigned int arr_3 [17] [17] ;
short arr_6 [17] ;
unsigned long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 3807411348U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-22127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 15870391382648530417ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
