#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned char var_1 = (unsigned char)212;
int var_2 = 1628594902;
unsigned long long int var_3 = 605177808291005984ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)209;
unsigned short var_7 = (unsigned short)19329;
short var_9 = (short)-9730;
int var_10 = 702409633;
unsigned int var_11 = 2173871710U;
int zero = 0;
int var_12 = -1353582192;
unsigned int var_13 = 2597506977U;
unsigned short var_14 = (unsigned short)31983;
unsigned short var_15 = (unsigned short)17664;
int var_16 = 773851519;
unsigned short arr_1 [23] [23] ;
int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)49615;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -91820108 : -428600476;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
