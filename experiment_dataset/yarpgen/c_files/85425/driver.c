#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14815085512755791119ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)160;
short var_21 = (short)-5744;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)205;
unsigned long long int var_24 = 2845696740156667470ULL;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)59;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
