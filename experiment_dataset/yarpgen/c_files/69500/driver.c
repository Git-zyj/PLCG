#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 96839117U;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-3304;
short var_5 = (short)-21667;
signed char var_9 = (signed char)1;
unsigned int var_10 = 94794322U;
unsigned short var_11 = (unsigned short)14899;
unsigned int var_13 = 2468255002U;
int zero = 0;
short var_14 = (short)22396;
unsigned int var_15 = 3409341135U;
short var_16 = (short)-32517;
unsigned short var_17 = (unsigned short)59354;
unsigned long long int var_18 = 4285657744766787929ULL;
unsigned char var_19 = (unsigned char)182;
unsigned int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3561004223U : 78406819U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
