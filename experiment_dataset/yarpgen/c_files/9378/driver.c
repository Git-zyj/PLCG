#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15896051619556053111ULL;
unsigned char var_5 = (unsigned char)19;
unsigned long long int var_10 = 18334008146192972423ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)162;
long long int var_12 = 9055928207741169726LL;
unsigned char var_13 = (unsigned char)181;
int var_14 = -1693680668;
unsigned long long int var_15 = 15759247815135683892ULL;
unsigned char var_16 = (unsigned char)115;
unsigned char arr_0 [13] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
