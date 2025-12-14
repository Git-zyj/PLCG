#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)90;
unsigned long long int var_5 = 6438441384031322836ULL;
long long int var_7 = 5272016661729693441LL;
short var_8 = (short)-22693;
int var_11 = 288326843;
int var_12 = -1050753006;
int zero = 0;
signed char var_14 = (signed char)62;
long long int arr_3 [23] [23] ;
unsigned char arr_6 [23] ;
unsigned long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 7525984852124232846LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2658418196640449593ULL;
}

void checksum() {
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
