#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 683251968U;
int var_3 = 725789596;
unsigned short var_4 = (unsigned short)6498;
short var_7 = (short)12349;
long long int var_8 = -6520805286812796625LL;
unsigned int var_9 = 409810611U;
short var_10 = (short)3074;
long long int var_11 = 851804708505971338LL;
unsigned long long int var_12 = 7663866000641104300ULL;
int zero = 0;
unsigned int var_13 = 3799977179U;
unsigned long long int var_14 = 11484148478204908730ULL;
unsigned int var_15 = 1053281722U;
unsigned int var_16 = 2346023718U;
unsigned int var_17 = 2725122882U;
short arr_1 [15] ;
int arr_2 [15] ;
short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-2056;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1363614939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-5616;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
