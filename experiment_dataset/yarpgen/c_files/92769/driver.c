#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15645;
long long int var_6 = -2002982368995897829LL;
signed char var_7 = (signed char)-116;
long long int var_10 = 3969749510360408270LL;
unsigned int var_11 = 1001201675U;
int zero = 0;
int var_14 = 1365293630;
unsigned short var_15 = (unsigned short)20683;
unsigned int var_16 = 3499149272U;
signed char var_17 = (signed char)75;
unsigned int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2536772608U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
