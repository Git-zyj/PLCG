#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2771142252215975953ULL;
unsigned long long int var_6 = 7452175434917541615ULL;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
unsigned long long int var_11 = 12867112283343986066ULL;
long long int var_12 = -2227673143853434263LL;
signed char var_13 = (signed char)90;
long long int var_14 = -2017123876410534734LL;
signed char var_15 = (signed char)-55;
signed char arr_1 [14] ;
signed char arr_2 [14] ;
unsigned char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)60;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
