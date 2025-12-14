#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1735843439U;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)231;
long long int var_6 = -7823923994554675253LL;
long long int var_7 = 6303515095318097823LL;
short var_8 = (short)24206;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)67;
int zero = 0;
unsigned int var_14 = 3557236360U;
short var_15 = (short)17960;
unsigned long long int var_16 = 10799069175088319468ULL;
int var_17 = -1948118658;
unsigned int var_18 = 3757382730U;
unsigned short arr_0 [23] [23] ;
unsigned int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)3298;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 2214531700U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
