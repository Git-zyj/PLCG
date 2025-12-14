#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3376364724U;
unsigned long long int var_14 = 2884267348678910938ULL;
int zero = 0;
signed char var_19 = (signed char)80;
long long int var_20 = 1728936593280749016LL;
long long int var_21 = 166705680226904858LL;
long long int var_22 = 9158661625598968061LL;
long long int var_23 = 6993587458507026142LL;
unsigned int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 1881626368U;
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
