#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4201794725U;
unsigned short var_4 = (unsigned short)1599;
short var_5 = (short)-25393;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-18745;
int zero = 0;
short var_12 = (short)5867;
signed char var_13 = (signed char)-101;
unsigned char var_14 = (unsigned char)51;
unsigned long long int var_15 = 13905209250903857929ULL;
int arr_0 [23] ;
short arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1028239368;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-17934;
}

void checksum() {
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
