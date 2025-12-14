#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2506348420U;
unsigned long long int var_6 = 1889298812753434115ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 18257391842867139410ULL;
unsigned short var_17 = (unsigned short)43582;
int zero = 0;
unsigned short var_18 = (unsigned short)41997;
unsigned short var_19 = (unsigned short)25626;
unsigned int var_20 = 2872815497U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)8029;
unsigned int var_23 = 3182504441U;
unsigned int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3118633909U;
}

void checksum() {
    hash(&seed, var_18);
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
