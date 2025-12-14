#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 4026888749U;
signed char var_5 = (signed char)1;
unsigned long long int var_8 = 3158447451507758174ULL;
long long int var_9 = -7671239696115589403LL;
signed char var_10 = (signed char)3;
unsigned long long int var_12 = 16788036576492873543ULL;
int zero = 0;
long long int var_14 = -9021157910572476432LL;
signed char var_15 = (signed char)84;
signed char var_16 = (signed char)-127;
long long int var_17 = -4368417500694029451LL;
long long int var_18 = 2991265741463390130LL;
_Bool var_19 = (_Bool)1;
unsigned int arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1458665600U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
