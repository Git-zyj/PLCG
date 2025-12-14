#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13377;
long long int var_7 = -1944962455258449098LL;
unsigned long long int var_9 = 9616734145942072405ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)18534;
unsigned short var_13 = (unsigned short)23129;
int zero = 0;
int var_14 = -40692124;
unsigned int var_15 = 3703210306U;
short var_16 = (short)8387;
unsigned short var_17 = (unsigned short)51277;
unsigned long long int arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 14901007313185342712ULL : 11810410227112828290ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
