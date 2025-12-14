#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)142;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)35115;
unsigned char var_11 = (unsigned char)140;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2214971021U;
int var_17 = -1019405690;
int zero = 0;
unsigned long long int var_18 = 16898679143571452638ULL;
signed char var_19 = (signed char)119;
unsigned char var_20 = (unsigned char)115;
short arr_0 [19] ;
short arr_1 [19] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-310;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-18128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -2570914981499300397LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
