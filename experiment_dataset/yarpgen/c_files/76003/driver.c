#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1704980032;
long long int var_6 = -1061398599863501120LL;
unsigned int var_9 = 3389142054U;
short var_17 = (short)5788;
int zero = 0;
short var_19 = (short)15333;
signed char var_20 = (signed char)109;
long long int var_21 = -4512594269294490131LL;
unsigned short var_22 = (unsigned short)23096;
_Bool var_23 = (_Bool)0;
int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1047255165;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
