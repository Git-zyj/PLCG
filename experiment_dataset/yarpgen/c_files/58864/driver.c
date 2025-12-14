#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
unsigned int var_12 = 4268302409U;
_Bool var_13 = (_Bool)1;
unsigned short var_18 = (unsigned short)6898;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1176158462U;
short var_21 = (short)-28340;
unsigned long long int var_22 = 15684474367221161644ULL;
unsigned int var_23 = 3900454797U;
unsigned short arr_0 [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)2476;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -503915125;
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
