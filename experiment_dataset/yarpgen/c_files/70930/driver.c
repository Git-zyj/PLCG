#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1497445372283793050LL;
unsigned short var_1 = (unsigned short)18962;
int var_5 = -382405528;
int var_6 = -1880319636;
int zero = 0;
unsigned int var_11 = 325671130U;
unsigned int var_12 = 3547097358U;
unsigned long long int var_13 = 6355925473880352481ULL;
unsigned int var_14 = 2136226591U;
signed char var_15 = (signed char)108;
_Bool arr_0 [16] ;
signed char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
