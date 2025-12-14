#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-65;
unsigned int var_2 = 1750625973U;
signed char var_5 = (signed char)39;
unsigned char var_6 = (unsigned char)7;
int var_9 = -730410376;
unsigned int var_11 = 2210129736U;
int var_12 = 1607933800;
int zero = 0;
unsigned short var_13 = (unsigned short)15471;
long long int var_14 = -3725542608144124620LL;
int var_15 = 751983741;
unsigned int var_16 = 2971764952U;
unsigned int arr_0 [13] ;
int arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 836774336U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1732393390;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 10118126471673261895ULL;
}

void checksum() {
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
