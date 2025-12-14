#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33508;
signed char var_3 = (signed char)97;
int var_6 = -1144258772;
int var_7 = -314548;
unsigned short var_8 = (unsigned short)55382;
int zero = 0;
int var_11 = 2109333842;
unsigned short var_12 = (unsigned short)37178;
long long int var_13 = -9038696472345678916LL;
int var_14 = 604795225;
unsigned short arr_0 [23] ;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)7437;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6196 : (unsigned short)56669;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
