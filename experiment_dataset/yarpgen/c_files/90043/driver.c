#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15315724709914510647ULL;
signed char var_2 = (signed char)16;
unsigned short var_3 = (unsigned short)1152;
short var_4 = (short)23802;
unsigned long long int var_6 = 10000065366476927478ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-31730;
int var_9 = -96846571;
signed char var_11 = (signed char)-78;
unsigned char var_13 = (unsigned char)118;
int zero = 0;
signed char var_14 = (signed char)120;
_Bool var_15 = (_Bool)1;
int var_16 = 1237633571;
unsigned char var_17 = (unsigned char)140;
unsigned int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2342670960U : 978433101U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
