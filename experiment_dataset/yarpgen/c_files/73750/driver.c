#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1340064367U;
unsigned char var_8 = (unsigned char)118;
int var_9 = 895881185;
int zero = 0;
unsigned long long int var_11 = 3379302584578175766ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)20206;
unsigned char var_14 = (unsigned char)44;
_Bool var_15 = (_Bool)0;
int var_16 = -157916258;
unsigned long long int arr_3 [23] [23] ;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 18047923762454247747ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -203158125;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
