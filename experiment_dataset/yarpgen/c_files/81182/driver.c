#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1054421760;
unsigned int var_6 = 3643141288U;
unsigned short var_12 = (unsigned short)23658;
short var_14 = (short)-3313;
int zero = 0;
unsigned int var_16 = 255522086U;
long long int var_17 = -1229658162261677457LL;
unsigned int var_18 = 825247468U;
long long int var_19 = -8515029840866260150LL;
unsigned short arr_3 [15] [15] ;
short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)53551;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-30114;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
