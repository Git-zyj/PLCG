#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)10;
unsigned char var_11 = (unsigned char)1;
unsigned int var_15 = 3772785270U;
unsigned int var_17 = 2266413250U;
int zero = 0;
signed char var_19 = (signed char)-34;
unsigned int var_20 = 2518708717U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 397082937U;
unsigned short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)56693;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
