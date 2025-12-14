#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26267;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)66;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)122;
signed char var_15 = (signed char)96;
unsigned int var_16 = 3094517416U;
signed char var_17 = (signed char)-6;
int zero = 0;
signed char var_19 = (signed char)104;
unsigned char var_20 = (unsigned char)109;
unsigned char var_21 = (unsigned char)64;
unsigned int var_22 = 1447865804U;
signed char arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)109;
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
