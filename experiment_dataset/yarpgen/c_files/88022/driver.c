#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1164569398;
signed char var_4 = (signed char)20;
short var_5 = (short)-5641;
unsigned long long int var_6 = 1207851616486669842ULL;
int var_11 = -312682370;
unsigned long long int var_15 = 15955311369609347423ULL;
int var_18 = 368423984;
signed char var_19 = (signed char)102;
int zero = 0;
unsigned int var_20 = 3446576307U;
int var_21 = -523098647;
unsigned int var_22 = 69994470U;
short var_23 = (short)-29292;
_Bool var_24 = (_Bool)1;
_Bool arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
